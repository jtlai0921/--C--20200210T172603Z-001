/* �H������ 0-32767 ��������� */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    
    printf("�п�J���ʹX�ӼƦr�H");
    scanf("%d",&j);

    for(i=1;i<=j;i++)    //���ͦh�Ӷü� 
    {       
        int r = rand();  //�H������ 0 ~ 32767 ��������� 
        printf("���%2d = %5d \n", i , r );
    }  

    printf("\n");
    system("pause");
    return 0;
}
