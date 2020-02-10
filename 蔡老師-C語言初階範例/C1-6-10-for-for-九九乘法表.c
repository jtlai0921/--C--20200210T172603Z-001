/* for-for-九九乘法表 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,result;

    printf("\n**使用 for 迴圈：\n");
    for(i=1;i<10;i++)      //外迴圈，將乘數每次遞增 1 
    { 
        for(j=1;j<=9;j++)  //內迴圈，將被乘數每次遞增 1 
        {
            printf("%2d*%2d=%2d",i,j,i*j);  //計算並印出99乘法表的值 
        }  

        printf("\n");  /*內迴圈跑完 , 印一列後換行 */
    }
        
    printf("\n**使用 while 迴圈：\n");
    i = 1;
    while ( i <= 9 ) //外迴圈 
    {
       j = 1;
       while ( j <= 9 )
       {
			 result = i * j;
			 printf("%d*%d=%-3d\t",i,j,result); //計算並印出99乘法表的值 
			 j++;  //將被乘數每次遞增 1 
       }
       
       i++;  //將乘數每次遞增 1 
       printf("\n"); //印完一列後換行 
    }            

    system("pause"); 
    return 0;
}
