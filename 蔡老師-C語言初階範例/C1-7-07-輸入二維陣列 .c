/* 輸入二維陣列 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row=3,col=2;
    int num[row][col]; //註標可使用變數  
    int i,j,sum=0;

    printf("請輸入 二維陣列( %d x %d ) \n" , row,col);
    for(i = 0; i < row ; i++ )
    {
        for(j = 0; j < col ; j++ )
        {
      	    printf("num1[%d][%d]：" , i , j); 
            scanf("%d",&num[i][j]);  //輸入二維陣列的值  
            sum += num[i][j];
        }   
    }  

    printf("\n***輸入合計：%d \n\n" , sum);         
    system("pause");
    return 0;
}
