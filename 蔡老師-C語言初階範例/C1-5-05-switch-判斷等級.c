/* ��switch�P�_���� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int score; //���ܼ� �Y�ŧi�� float �� double�A�sĶ�N���F     
   printf("��J���Z�G");
   scanf("%d",&score);
   /* TODO�G �P�_ ��J�� �O�_��[�Ʀr]�A�аѦҽd�Ҥ��� CheckNumber.c */ 
   
   
   /* TODO�G�[�W��J���~����( 0-100 ), �ϥ�if else , �Nswitch �]�J */  
   

   switch(score/10)  //score��int�A���૬�O�A99/10�N��9�A�p�Ʀ�ƴN�����˱��F 
   {
	 case 10:
        printf("���A�@�� �I�happle\n"); //��case�S��break; �|��������U�@��case�{��  
     case 9:
        printf("���A�@�i����\n");  
        printf("����:A\n");
        break;   
     case 8:
        printf("����:B\n");
        break;
     case 7:
        printf("����:C\n");
        break;
     case 6:
        printf("����:D\n");
        break;
    //TODO�G�мW�[�@�� case 5: ����:E ���Ϭq�A�U��Ϭq���󦡧אּ ����:F        
        
     default: /*�Ydefault�U�L����{���X�A�h���i�� default: �o�� */  
	    printf("����:E(���ή�)\n"); 
   }

   system("pause");
   return 0;
}
