/* 隨機產生 0-32767 之間的整數 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    
    printf("請輸入產生幾個數字？");
    scanf("%d",&j);

    for(i=1;i<=j;i++)    //產生多個亂數 
    {       
        int r = rand();  //隨機產生 0 ~ 32767 之間的整數 
        printf("整數%2d = %5d \n", i , r );
    }  

    printf("\n");
    system("pause");
    return 0;
}
