/* 字元 資料型態說明 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
      /* @自動開啟 說明網頁：二/八/十六進位 轉換為十進位 @ */
	  system("START http://www.jtvb.tw/desp/NumTra/NumTra.htm"); 
	  	
      int myChar='A';  /* 宣告 整數變數 myChar，並指定值為 A */ 
      printf("使用printf輸出不同的資料型態：\n\n");
    
      printf("1>整數型態myChar = %d \n",myChar);  /* 以整數 型態印出 變數myChar */
      printf("2>字元型態myChar = %c \n",myChar);  /* 以字元 型態印出 變數myChar */      
      printf("3>十六進位myChar = %x \n",myChar);  /* 以十六進位 型態印出 變數myChar */    
      printf("4>八進位myChar   = %o \n",myChar);  /* 以八進位 型態印出 變數myChar */      
      printf("\n\n"); 
      
      int num=0101;   //宣告為八進位, 等於十進位 65=8的平方 X 1 + 0 + 1
      printf("＊＊宣告為八進位：int num=0101 (0開頭)：\n");  
      printf("5>顯示為八進位：%o\n",num);
      printf("6>顯示為十進位：%d\n",num);
      printf("7>顯示為十六進位：%x\n",num);
      printf("8>顯示為文字：%c\n",num);   
      printf("\n\n");   
        
      int num2=0x41;  //宣告為十六進位, 等於十進位 65=16的1次方 X 4 + 1    
      printf("＊＊宣告為十六進位：int num2=0x41 (0x開頭)：\n");
      printf("9> 顯示為八進位：%o\n",num2);
      printf("10>顯示為十進位：%d\n",num2);
      printf("11>顯示為十六進位：%x\n",num2);  
      printf("12>顯示為文字：%c\n",num2);
      printf("\n");    
	        
      system("pause");  
      return 0;
} 

