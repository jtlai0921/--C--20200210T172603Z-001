/* ��J�G���}�C */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row=3,col=2;
    int num[row][col]; //���Хi�ϥ��ܼ�  
    int i,j,sum=0;

    printf("�п�J �G���}�C( %d x %d ) \n" , row,col);
    for(i = 0; i < row ; i++ )
    {
        for(j = 0; j < col ; j++ )
        {
      	    printf("num1[%d][%d]�G" , i , j); 
            scanf("%d",&num[i][j]);  //��J�G���}�C����  
            sum += num[i][j];
        }   
    }  

    printf("\n***��J�X�p�G%d \n\n" , sum);         
    system("pause");
    return 0;
}
