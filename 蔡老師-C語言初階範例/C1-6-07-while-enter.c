/* while-enter */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  //使用getche函數 
 
int main(void)
{
   int number=0;
   printf("一個字元一個字元輸入(直到按[Enter]鍵才停止):");
    
   while(getche() != '\r'){    // \r表[Enter]鍵 , 也可改為英文字母,如 Q 
         number = number + 1;  // while中只有一行, 可省略 { } 
   } 
   printf("\n共輸入%d個字元\n", number);
    
   system("pause");
   return 0;
}	
