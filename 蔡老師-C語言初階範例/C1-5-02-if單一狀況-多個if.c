/* ��@���p-�ϥΦh�� if�P�_�� , �P�_��J�r�� */
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    char ch;
    printf("�п�J�@�� �^��r�μƦr�G"); 
    scanf("%c",&ch);               

    if(ch >= 'a' && ch <= 'z') /* && ���i�令 || */
       printf("��J�r�����G%c , �p�g�r��\n",ch);

    //�W�����@�� if �]�i�p�U �g���@��  
    //if(ch >= 'a' && ch <= 'z') printf("��J�r�����G%c , �p�g�r��\n",ch);

    if(ch >= 'A' && ch <= 'Z'){ /* �Y�W�C�� if ���� , ���|�P�_����ԭz */   
       printf("��J�r�����G%c , �j�g�r��\n",ch);
    }  

    if(ch >= '0' && ch <='9') /* �Y�W�C�� if ���� , ���|�P�_����ԭz */   
    {
       printf("��J�r�����G%c , ���ԧB�Ʀr\n",ch);
    }

    system("pause");    
    return 0;
} 
