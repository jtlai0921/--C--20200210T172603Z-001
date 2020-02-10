/* if else兩種狀況 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //因使用 toupper 函數  

int main(void)
{
    char rain;
    
    printf("**測試可輸入 y \n\n");
    printf("今天降雨機率大於50%嗎(Y/N) ? ");
    scanf("%c",&rain);    //字元型態變數，格式符號用 %c 
    rain = toupper(rain); //將輸入字元 , 轉成大寫字母   

    if(rain == 'y' || rain =='Y')  //判斷輸入是否為y或是Y 
      printf("你最好要帶傘!\n");
    else    //當使用者沒有輸入 y或Y時，進入else敘述中 
      printf("應該不會下雨，不必帶傘了!\n");

    system("pause");     
    return 0;
}
