/* 撰寫第一支C語言程式 */ 

//必須用#include指令, 將stdio.h與stdlib.h 這兩個標頭檔 引入進來 
#include <stdio.h>   //輸入 及輸出函數庫 ( printf()函數，定義在stdio.h檔案中)  
#include <stdlib.h>  //標準函數庫，system()函數，定義在stdlib.h檔案中 


int main(void) /* 主函數，C程式一律從 main()函數開始，往下執行，
　　　　　　　　　main()函數 就是程式起點 
　　　　　　　　　也可寫成這兩種寫法：　int main()  或  main() */ 

{ //左大括號，代表整個main()函數的開始 

   printf("Hello C語言 , 我來了! \n"); //為輸出函數printf()，從螢幕印出括號內文字。\n是換行 
   printf("這是我的第一支 C語言程式!\n\n\n");   
   printf("Ya! Ya! Ya! ............\n");     
   system("pause");  // 暫停執行，等待使用者，以觀看執行結果 
   return 0;         // 傳回0代表程式 , 正常執行完成結束 

}  //右大括號，代表整個 main()函數的結束。 

