/* for��J�h����� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     int i,n;
     int money,totalmoney=0;
    
     printf("���տ�J �p�G3 \n\n");     
     printf("��J�z�n�R���ӫ~�������ƥ�(n>=1):");
     scanf("%d",&n);
    
     for(i=1 ; i<=n ; i++)  
     {	
         printf("��J��%d�ذӫ~������:",i);
         scanf("%d",&money);
         totalmoney = totalmoney + money; //�[�`���B  
     }
    
     printf("�����ӫ~���`���B=%d \n\n", totalmoney);
    
     system("pause");
     return 0;
}
