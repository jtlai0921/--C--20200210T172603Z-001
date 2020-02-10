/* 資料型態大小與 sizeof運算子 */ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* sizeof運算子 , 可計算程式中 , 變數所佔用的記憶體大小 */  
    
    //整數 的各種型態 佔用的記憶體大小：  
    printf("\n 1>整數int：%d bytes"   , sizeof(int) );
    printf("\n 2>unsigned：%d bytes"  , sizeof(unsigned int) );
    printf("\n 3>short int：%d bytes" , sizeof(short int) );
    printf("\n 4>unsigned short int：%d bytes \n" , sizeof(unsigned short int) );
    
    //浮點數 的各種型態 佔用的記憶體大小：  
    printf("\n 5>float：%d bytes"     , sizeof(float)  );
    printf("\n 6>double：%d bytes \n" , sizeof(double) );
    
    //字元 資料型態 佔用的記憶體大小：
    printf("\n 7>字元char：%d bytes \n" , sizeof(char) );
   
    //字元陣列 佔用的記憶體大小：
    char a[20]="**字元陣列**";   // 每一中文字 , 使用兩字元(bytes) 
    printf("\n 8>字元陣列a[20]存放內容： %s ：%d bytes \n" , a , sizeof(a) );    
    
    //宣告整數變數  
    int b;
    printf("\n 9>宣告整數變數 b 佔：%d bytes \n\n" , sizeof(b) );
    
    system("pause");
    return 0;
}
