/* �ˬd �����Ҹ� */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	//strlen()��� & strupr()��ơA�w�q��string.h 

int main(void)
{
	/* 1>�ŧi�ܼ� */
	char idNo[10]; //�����Ҹ�  
	int i;         //for�j��p�ƾ�  
	int err = 0 ;  //���~�ƶq  
	
	/* 2>��J �����Ҹ� */	
	printf("�п�J �����Ҹ��G");
	gets(idNo);
	strupr(idNo); //�N�r�ꤤ�� �p�g�^��r�� �ন�j�g  
	printf("�z��J�� �����Ҹ��G%s�A�@��%d�Ӧr\n",idNo,strlen(idNo) );
	
	/* 3>�ˬd���׬O�_��10�Ӧr�� */	
	if(strlen(idNo) != 10){
	   printf("��J���~�G�����Ҹ� ������10�Ӧr��\n");
       system("pause");	
	   return 0;
	}
		
	/* 4>�ˬd �� 0/1/2-9 �Ӧr�� */		
	for(i=0 ; i<strlen(idNo) ; i++) {
		if(i==0){ //�ˬd�� 0 �Ӧr���A�O�_�� �j�g�^��r��     
			if(idNo[i] < 65 || idNo[i] > 90){
			   printf("�� %d �Ӧr�� ���O�j�g�^��r \n",i+1);
			   err++;
			}		
		}else if(i==1){ //�ˬd�� 1 �Ӧr���A�O�_�� 1 �� 2 
			if(idNo[i] < 49 || idNo[i] > 50){
			   printf("�� %d �Ӧr�� ���O 1 �� 2  \n",i+1);
			   err++;
			}									
		}else{ //�ˬd�� 2-9 �Ӧr���A�O�_�� �Ʀr
			if(idNo[i] < 48 || idNo[i] > 57){
			   printf("�� %d �Ӧr�� ���O �Ʀr \n",i+1);
			   err++;			   
			}						
		}		  		
	}
	
	/* 5>��� ���G */		
	if(err == 0)
	   printf("\n��J���T\n");
	else
	   printf("\n�@�� %d �ӿ��~\n",err);	   
	
    system("PAUSE");	
	return 0;
}	
