/*while�j�� 1+3+5+...+99�֥[�_�� */
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int sum=0;  //sum�ȥ��]��� 0  
    int i=1;    //�p�ƾ����  
   
    while(i<=99) { //����   
       sum = sum + i;
       i=i+2;  //�C���W�[ 2 , �]�i�g�� i+=2;  
    }
    printf("1+3+5+�K+99 = %d\n",sum);
    
    //TODO : �бN�W�C while �j���g�� for �j��   
    
    
    system("pause");     
    return 0;
}
