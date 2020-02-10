/* for-for-break跳出內迴圈--九九乘法表 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mOutCnt , mInCnt;  /* 外迴圈 , 內迴圈 的 結束值 */
    int mOut , mIn;        /* 外迴圈 , 內迴圈 的 計數器 */

    printf("輸入九九乘法表的列數(外迴圈)與每橫列(內迴圈)的結束值(兩值間請空白):"); 
    scanf("%d %d",&mOutCnt , &mInCnt);
    printf("\n");
    
    if (mOutCnt >= 1 && mOutCnt <= 9 && mInCnt >= 1 && mInCnt <= 9)
    {
        for(mOut=1 ; mOut<=mOutCnt ; mOut++) /* 外迴圈，將 被乘數 每次遞增 1 */
        { 
            for(mIn=1 ; mIn<10 ; mIn++)      /* 內迴圈，將 乘數 每次遞增 1 */
            {
                printf("%2d*%2d=%2d",mOut,mIn,mOut*mIn);  /* 計算並印出99乘法表的值 */
                if(mIn >= mInCnt)                                 
                   break;  /* 跳出 內迴圈結構 */
            }
            printf("\n");  /*內迴圈跑完，印一列後換行 */
        }            
    }
    else
    {
       printf("請您輸入：1-9的數字\n");     
    }

    system("pause"); 
    return 0;
}
