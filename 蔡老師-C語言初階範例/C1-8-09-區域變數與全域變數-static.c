/* �ϰ��ܼƻP�����ܼ�-static */
#include <stdio.h>
#include <stdlib.h>

int a ;  //�����ܼ� a�A�Y�����w��ȡA�۰ʥH0 �Ӷi���l�� 

/* func��ƪ��w�q */
void func(void)
{
   //int b;  //�ϰ��ܼ� b ,�Y�����w���, �h�S���T�w���ƭ� 
   int b = 0;        
      
   //���w�Fstatic���ϰ��ܼ�c ,�u�|��l�Ƥ@��, func��Ƶ���,�O�ЪŶ��]���|��� 
   static int c ;  //���w�Fstatic���ϰ��ܼ�c ,�۰ʥH0 �Ӷi���l��

   printf("�ܼ�a��%d�A�ܼ�b��%d�A�ܼ�c��%d\n", a, b, c);

   a++;
   b++;
   c++;
   
   printf("�ܼ�a��%d�A�ܼ�b��%d�A�ܼ�c��%d\n\n", a, b, c);
}


int main(void)
{
   int i;
   //�H for�j�� , ���ƩI�s��� 5�� 
   for(i=0; i<5; i++)
       func();      

  system("pause");
  return 0;
}
