/* �P�_ ��J�� �O�_���Ʀr */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float number; //�ŧi�ܼ�(�i�� ��� �� �B�I��) 
	
	printf("�P�_ ��J�� �O�_���Ʀr\n------------------------------\n"); 
	printf("�бz��J �Ʀr : "); 
	int ret = scanf("%f",&number); //�ϥ��ܼ� ret , ���� scanf()�^�ǭ� 
	
	printf("ret = %d\n",ret); //�L�X �^�ǭ� ret 
	
	//�P�_ ��J��  
	if(ret == 0){ //�Y�^�ǭȬ� 0 , �h ���O�Ʀr , �_�h���Ʀr 
	   printf("�z��J�� ���O �Ʀr�G%f \n",number); 
	}else{
	   printf("�z��J�� �O �Ʀr�G%f \n",number); 
	} 

    system("pause");  
    return 0;
}

