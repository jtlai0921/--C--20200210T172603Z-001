/* 使用 scanf 輸入 單一變數--將英哩轉換成公里 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   float mile;
   float km;
    
   printf("**將 英哩 轉成 公里\n");
   printf("請輸入 英哩(可包含小數) ==> ");
   scanf("%f",&mile); //變數前面要加 & ， 否則執行會當掉 

   printf("\n您輸入：%.2f英哩 \n\n",mile);  /* %.2f表 顯示小數位數 2位 */                 
   km = 1.609 * mile ;
   printf("結果是：%.2f公里 \n\n",km); 
      
   /* 以下的 scanf 用法是錯誤的  */ 
   //scanf("請輸入 英哩：%f",&mile);  /* 輸入格式控制字串中，不可放入非控制字串的內容 */ 
   //scanf("%f  ",&mile);             /* 輸入格式控制字串中，後面 也不可有空白 */ 
     
   system("pause");
   return 0;
}
