/* �ϥ� gets ��J�r�� */
#include <stdio.h>
#include <stdlib.h>

int main()
{   
    char name[100];  /* �ŧi �r���}�C */
    char name2[100];  
    
    printf("�i��J ��ӭ^��m�W�G�p Tony Chan �P Jack Lee (�m�W�������ť�)\n\n");    
    printf("1>�ϥ�gets  ��J�G");       
    gets(name);  /* name�ܼƫe���[ & �C��J�r��,�å� �r���}�C name ���� */
 
    printf("2>�ϥ�scanf ��J�G");     
    scanf("%s",&name2); /* name�ܼ� �n�[ &  */ 
        
    printf("\n�Y�r�ꤤ�� �ť� , �ϥ�scanf,�N�L�k���o�X �ťի᪺�r�� \n");
    printf("�ϥ�gets �GHi %s, How are you ? \n", name);   /* gets�G���` �L�X�r�ꤺ�e */ 
    printf("�ϥ�scanf�GHi %s, How are you ? \n", name2);  /* scanf�G�L�k���o�X �ťի᪺�r�� */
    printf("\n");
    
    system("pause");
    return 0;
}
