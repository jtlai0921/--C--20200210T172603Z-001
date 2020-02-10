/* 邏輯 運算子 &&  ||  !  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* @自動開啟 說明網頁：顯示鍵盤圖片 @ */
    system("START http://www.jtvb.tw/keyboard.jpg");     
    
    int a=30,b;
 
    printf("**若運算式結果：1表True(成立)，0表false(不成立)：a=30 \n\n");    
 
    b = (a>10 && a<99);  //a大於10 且 a小於99       
    printf("1. a>10 && a<99： b=%d \n\n",b);
        
    b = (a>10 && a<20);
    printf("2. a>10 && a<20： b=%d \n\n",b);
        
    b = (a>10 && a<20);
    b = !b;   // not b   !為 反向運算  
    printf("3. a>10 && a<20 , 再 !b： b=%d \n\n",b);          
        
    b = (a>10 || a>99);  //a大於10 或 a大於99          
    printf("4. a>10 || a>99： b=%d \n\n",b);
    
    b = (a>200 || a>500);
    printf("5. a>200 || a>500：　b=%d \n\n",b);
          
    system("pause");
    return 0;
}
