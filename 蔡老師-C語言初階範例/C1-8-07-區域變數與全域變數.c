/* �ϰ��ܼƻP�����ܼ� */ 
#include <stdio.h>
#include <stdlib.h>

int a = 0; //�����ܼ�  

/* func��ƪ��D��{�� */
void func(void)
{
   int c = 2;  // c �� func ��ƪ� �ϰ��ܼ� 

   printf("\n\n�bfunc��Ʒ��i�H�ϥ��ܼ�a�M�ܼ�c\n");
   printf("�ܼ�a , func�� �p��e ���Ȭ�%d\n", a);
   a = a + 7;  // a �������ܼ�
   printf("�ܼ�a , func�� �p��� ���Ȭ�%d\n", a);
  
   //�U���o����榳�� ,���ŧi�ܼ� b 
   //printf("�ܼ�b���Ȭ�%d\n", b); 
   
   c = c + 10;   
   printf("�ܼ�c���Ȭ�%d\n", c);
}


int main(void) /* main�D��� */
{
   int b = 1;  // b �� main ��ƪ� �ϰ��ܼ� 

   printf("�bmain��Ʒ��i�H�ϥ��ܼ�a�M�ܼ�b\n");
   printf("�ܼ�a���Ȭ�%d\n", a);
   printf("�ܼ�b���Ȭ�%d\n", b);
   
   //�U���o����榳�� ,���ŧi�ܼ� c 
   //printf("�ܼ�c���Ȭ�%d\n", c);

   func();  //��1�� �I�sfunc��� 
   printf("\n�ܼ�a , ��1���I�sfunc�� ���Ȭ�%d\n", a);
   
   func();  //��2�� �I�sfunc��� 
   printf("\n�ܼ�a , ��2���I�sfunc�� ���Ȭ�%d\n", a);   

   printf("\n\n");
   system("pause");
   return 0;
}
