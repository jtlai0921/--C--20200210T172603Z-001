/* �H������0-32767���������--�]�w�üƺؤl , �Ʀr�C���|���@�� */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{    
    int i;
    int seed = time(NULL);  //�]�w�üƺؤl�ANULL�����j�g 

    printf("seed = %d \n\n",seed); //��1970/1/1 �ܤ������ 
    srand(seed);  //�Y�O�P�@�Ʀr�A�h�C�����泣�@��  

    // �H������ 7 �Ӿ��   
    for(i = 0 ; i < 8; i++)
    {
        int r = rand();
        int m = r % 8; /* ��42���l�� �� 0-41 */ 
        m = m + 1;      /* �[1��N�� 1-42 ���Ʀr */  
        printf("��üơG%6d�@1��30�����üơG%4d\n", r, m);
    }

    printf("\n");
    system("pause");
    return 0;
}
