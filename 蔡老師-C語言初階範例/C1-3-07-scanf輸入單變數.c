/* �ϥ� scanf ��J ��@�ܼ�--�N�^���ഫ������ */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   float mile;
   float km;
    
   printf("**�N �^�� �ন ����\n");
   printf("�п�J �^��(�i�]�t�p��) ==> ");
   scanf("%f",&mile); //�ܼƫe���n�[ & �A �_�h����|�� 

   printf("\n�z��J�G%.2f�^�� \n\n",mile);  /* %.2f�� ��ܤp�Ʀ�� 2�� */                 
   km = 1.609 * mile ;
   printf("���G�O�G%.2f���� \n\n",km); 
      
   /* �H�U�� scanf �Ϊk�O���~��  */ 
   //scanf("�п�J �^���G%f",&mile);  /* ��J�榡����r�ꤤ�A���i��J�D����r�ꪺ���e */ 
   //scanf("%f  ",&mile);             /* ��J�榡����r�ꤤ�A�᭱ �]���i���ť� */ 
     
   system("pause");
   return 0;
}
