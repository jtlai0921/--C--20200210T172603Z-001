/* if ��@���p */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{    
    float money;
        
    printf("**�п�J ���ժ��B���O���G3000 ,  2000 , 5 \n\n");        
    printf("���B(�j��2000��7��A�å[$30����O�A�p�󵥩�2000�S���餣�[����O)\n");
    printf("�ʶR���B�Gnt$ ");
	scanf("%f",&money); //���o��J�� 
   
    if(money > 2000)  /* ���P�_���S�[ {}�A�{���ԭz�u���@��A�h{ }�~��ٲ� */
      money = money * 0.7 ;  /* �_�h�u��if�ԭz�U����1��~��Oif�ԭz���@���� */     	                            
      money = money + 30 ;   /* ��>2000,�i��7��,�~�n�[ $30����O */
   
    printf("��ڻݥI %.2f \n\n", money);
    system("pause"); 
    return 0;
}
