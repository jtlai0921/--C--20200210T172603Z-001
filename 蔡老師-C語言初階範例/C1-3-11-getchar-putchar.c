/* 使用 getchar & putchar 字元函數 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char ch;
    
  printf("請輸入一個字元(輸完請按[Enter]):");
  ch = getchar();  /* 使用getchar 顯示在螢幕上 ,不換行 */ 
  
  printf("您輸入的字元是:"); 
  putchar(ch);  /* 顯示字元 */
  
  /* 換行 3 次 */ 
  putchar('\n'); 
  putchar('\n'); 
  putchar('\n'); 
  
  //putchar("\n"); //字元使用單引號，不是 雙引號 
   
  printf("若輸入多個字元 , 也只會GET第一個字元 \n");   
    
  system("pause");  
  return 0;
} 
