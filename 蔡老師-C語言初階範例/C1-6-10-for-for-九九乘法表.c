/* for-for-�E�E���k�� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,result;

    printf("\n**�ϥ� for �j��G\n");
    for(i=1;i<10;i++)      //�~�j��A�N���ƨC�����W 1 
    { 
        for(j=1;j<=9;j++)  //���j��A�N�Q���ƨC�����W 1 
        {
            printf("%2d*%2d=%2d",i,j,i*j);  //�p��æL�X99���k���� 
        }  

        printf("\n");  /*���j��]�� , �L�@�C�ᴫ�� */
    }
        
    printf("\n**�ϥ� while �j��G\n");
    i = 1;
    while ( i <= 9 ) //�~�j�� 
    {
       j = 1;
       while ( j <= 9 )
       {
			 result = i * j;
			 printf("%d*%d=%-3d\t",i,j,result); //�p��æL�X99���k���� 
			 j++;  //�N�Q���ƨC�����W 1 
       }
       
       i++;  //�N���ƨC�����W 1 
       printf("\n"); //�L���@�C�ᴫ�� 
    }            

    system("pause"); 
    return 0;
}
