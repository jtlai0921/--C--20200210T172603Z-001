/* if else if �h�ت��p-�P�_���� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int score;    
    printf("�п�J�z�����Z�G");
    scanf("%d",&score);
   
    //TODO�G�[�W��J���~���� ( 0-100 )
    
	   
    /* �H�U���ơM���� �Ѱ���C �ƦC�A�_�h�|�~�P */   
    if(score >= 90)          //�O�_��90���H�W 
      printf("�z�� �ҵ�\n");
    else if(score >= 80)     //�p��90��80�H�W 
      printf("�z�� �A��\n");
    else if(score >= 70)     //�p��80��70�H�W 
      printf("�z�� ����\n");
    else if(score >= 60)     //�p��70��60�H�W 
       printf("�z�� �B��\n");
    //TODO�G�мW�[�@�� >= 50���Ϭq�A�U��Ϭq���󦡧אּ >= 40   
       
    else if(score >= 50)     //�p��60��50�H�W 
	   printf("�z�� ���ή�\n");    
    else                     //�䥦 , �p��50��               
       printf("�·бz�h����\n");
    
    system("pause"); 
    return 0;
}
