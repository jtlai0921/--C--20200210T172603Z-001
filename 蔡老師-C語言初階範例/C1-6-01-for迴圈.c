/*for�j��--�֥[1��10 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* @�۰ʶ}�� ���������Gfor�j�� ������L�{ @ */
    system("START http://www.jtvb.tw/desp/For/For.htm");    
     
    int i;       /* i�O�j��� �p�ƾ� */
    int sum=0;   /* �ȥ��N����ܼ� sum ����ȳ]��0 */
    int k=0;     /* �j�����X�� */  

	//TODO : �i��� �j�骺 �_�W�� �P ���W���  	

    printf("------���W�j��------\n");
    for(i=1 ; i<=10 ; i=i+1)  //�`�N�����Ȭ� <=10 , �C�����W 1  
    {
        k += 1; //�p������� ? ��    
        sum = sum + i; //�Nsum���ȦA�[�Wi���� 
        printf("�� k= %4d�� (i=%4d)�G �X�p(sum)�G%7d\n" ,k ,i , sum); /* ���for�j�骺�p��L�{ */ 
    }           
    printf("1+2+3+�K+10 = %d\n",sum); //�L�Xsum���� 

    printf("\n\n------����j��------\n");
    k=0; 
    sum=0; 
    for(i=10 ; i>=1 ; i=i-1)  //�`�N�����Ȭ� >=1 , �C������ 1  
    {
        k += 1;
        sum = sum + i; //�Nsum���ȦA�[�Wi���� 
        printf("�� k= %4d�� (i=%4d)�G �X�p(sum)�G%7d\n" ,k ,i , sum); /* ���for�j�骺�p��L�{ */ 
    }           
    printf("10+9+8+�K+1 = %d \n\n",sum); //�L�Xsum���� 

    system("pause"); 
    return 0;
}
