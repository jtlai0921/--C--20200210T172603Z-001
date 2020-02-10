/* printf 多行字串 */ 
#include <stdio.h>
#include <stdlib.h> 

int main(void)
{  
    /* printf 單行字串 , \n是換行 , 小寫t跳位(tab) */ 
    printf("***printf 單行字串\n");      
    printf("Hello \t C/C++ \n");  
    printf("Hello \t Visual C/C++ \n");      
    printf("Hello \t Dev-C \n"); 
            
    printf("\n\n***printf 多行字串\n");  /* 先空兩行,再印標題 */    
    /* 使用 一個 printf 印出 多行字串  */ 
    printf(
      "Hello \t C/C++ \n"
      "Hello \t Visual C/C++ \n"
      "Hello \t Dev-C \n\n"
    );
    
    system("PAUSE");  	
    return 0; 
}
