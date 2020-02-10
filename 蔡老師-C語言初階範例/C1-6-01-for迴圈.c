/*for迴圈--累加1到10 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* @自動開啟 說明網頁：for迴圈 的執行過程 @ */
    system("START http://www.jtvb.tw/desp/For/For.htm");    
     
    int i;       /* i是迴圈值 計數器 */
    int sum=0;   /* 務必將整數變數 sum 的初值設為0 */
    int k=0;     /* 迴圈執行幾次 */  

	//TODO : 可更改 迴圈的 起訖值 與 遞增減值  	

    printf("------遞增迴圈------\n");
    for(i=1 ; i<=10 ; i=i+1)  //注意結束值為 <=10 , 每次遞增 1  
    {
        k += 1; //計算執行到第 ? 圈    
        sum = sum + i; //將sum的值再加上i的值 
        printf("第 k= %4d圈 (i=%4d)： 合計(sum)：%7d\n" ,k ,i , sum); /* 顯示for迴圈的計算過程 */ 
    }           
    printf("1+2+3+…+10 = %d\n",sum); //印出sum的值 

    printf("\n\n------遞減迴圈------\n");
    k=0; 
    sum=0; 
    for(i=10 ; i>=1 ; i=i-1)  //注意結束值為 >=1 , 每次遞減 1  
    {
        k += 1;
        sum = sum + i; //將sum的值再加上i的值 
        printf("第 k= %4d圈 (i=%4d)： 合計(sum)：%7d\n" ,k ,i , sum); /* 顯示for迴圈的計算過程 */ 
    }           
    printf("10+9+8+…+1 = %d \n\n",sum); //印出sum的值 

    system("pause"); 
    return 0;
}
