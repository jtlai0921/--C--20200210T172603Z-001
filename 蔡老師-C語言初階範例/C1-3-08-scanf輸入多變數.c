/* 使用scanf輸入 多個變數 */
#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int length,width;
    
    printf("當兩轉換規格，以空白隔開(或不空)，輸入時可以[空白]按[Enter]區隔變數 \n");
    printf("輸入長方形的長 寬:");    

    scanf ("%d%d" , &length,&width); //兩個 %d%d 中間也可以 有空白 
    
    printf ("\n長為%d", length);
    printf ("，寬為%d 的面積=", width);
    printf ("%d \n\n", length*width);  /* 直接將公式放置 引數區 */
    
    
    /* 改變轉換規格 的 區隔符號 */ 
    printf("當兩轉換規格，以逗號隔開，輸入時就必須以 逗號區隔變數 \n");
    printf("輸入長方形的長,寬:");
    
    scanf ("%d,%d" , &length,&width); //%d,%d 中間以 逗號隔開，輸入的資料間也必須 以逗號隔開    
    printf ("\n長為%d , 寬為%d 的面積=%d \n", length , width , length*width);
            
    system("pause");
    return 0;
}
