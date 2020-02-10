/* putchar:將指定的『字元』，輸出到螢幕 */
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    char text= 'B';
    int text_ascii=68;
    
    /* putchar 不會自動換行 */ 
    putchar('A');  /* 傳入 字元常數 , 印出 A */ 
    printf("\n");       
    
    putchar(text); /* 傳入 字元變數 , 印出 B */    
    //TODO : 將上面這一行 , 改寫 為 printf()  
	
	
	printf("\n");    
    putchar(67);  /* 傳入 數值常數 , 印出 C */  
    printf("\n");       
    
    putchar(text_ascii); /* 傳入 數值變數 , 印出 D */      
    printf("\n");

    system("pause"); 
    return 0;
}
