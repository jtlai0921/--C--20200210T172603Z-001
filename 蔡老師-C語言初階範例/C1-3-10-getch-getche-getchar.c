/* 使用 getch， getche，getchar 函數輸入字元 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  /* 使用 getche 或 getch , 必須 include */

int main()
{
  char ch1,ch2,ch3;
  printf("** 可分別輸入 a b c 三個字元測試\n");

  printf("\n1>使用getch：輸入第1字元:");
  ch1 = getch();    /* 使用getch  不顯示在螢幕上,換行 */ 
  printf("\n您輸入的字元是:%c\n\n",ch1);  

  printf("\n2>使用getche：輸入第2字元:");
  ch2 = getche();   /* 使用getche 顯示在螢幕上,換行 */ 
  printf("\n您輸入的字元是:%c\n\n",ch2);  
  
  printf("\n3>使用getchar：輸入第3字元(輸完請按[Enter]) :");
  ch3 = getchar();  /* 使用getchar 顯示在螢幕上,不換行 */ 
  printf("\n您輸入的字元是:%c\n\n",ch3);    

  printf("\n4>所輸入3個字元:%d %d %d\n",ch1,ch2,ch3); //TODO：請修改此行，顯示原輸入字元 

  printf("\n5>$$$麻煩您 按任一個鍵 , 就會結束此程式.....");
  ch1 = getch();
  //system("pause"); //不用此行寫法，改以 getch() 取代 
  return 0;
}
