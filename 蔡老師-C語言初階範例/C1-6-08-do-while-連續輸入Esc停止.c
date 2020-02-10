/* do-while-連續輸入字元，按[Esc]鍵停止輸入 */ 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //使用getche函數 

int main (void)
{
   char ch;
   int num_char=-1; //共輸入幾個字元，先減1 (Esc)，以免多一個字元 
   printf("連續輸入字元(直到按[Esc]鍵為止):");
 
   do
   {
       ch = getche();  //取得輸入字元 
       num_char++;     //計算字元 加 1   
   }while(ch != 27);   //ASCII值為27表示Esc鍵，若要改為[Enter]停止，改為13 
 
   printf("\n共輸入%d個字元\n", num_char);
 
   system("pause");
   return 0;
}
