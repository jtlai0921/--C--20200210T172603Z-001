/* �ǤJ�h�Ӥ޼�-���P���A */ 
#include <stdio.h>
#include <stdlib.h>

void showline(char,int); /* �ŧi��ƭ쫬 */

int main(void)
{
   showline('$',20);    
   printf("�I�s�e�u�����");
  
   showline('@',40);
   printf("��ƥi�Q�I�s�h��");
  
   showline('?',60);
   
   //�U���o��I�s�N���F, �֤@�Ӥ޼� 
   //showline('*');  
   
   //TODO : �i���ϥΪ� ��J �Ÿ� �P �Ÿ��ƶq, �A�N�ܼ� �ǤJ��Ƥ�  
   

   system("pause");
   return 0;
}


//�̶ǤJ���Ÿ��P�ƶq,�e�X�@���Ÿ��u 
void showline(char mChar,int mNum)  //�L�Ǧ^�� �P ���ǤJ��(�h��) 
{
   int mLoop=1;
   
   printf("\n");   
   for(mLoop=1 ; mLoop<= mNum ; mLoop++)
   {
       printf("%c",mChar);   
   }          
   printf("\n");
}
