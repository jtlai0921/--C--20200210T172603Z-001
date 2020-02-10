/* printf 逸出字元 */ 
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    char name[20]= "Mike Lee"; 
    int age=28;
    char level='A';
    float height=178.5;   
    
    printf ("我的名字叫 \"%s\" \t今年 %d 歲 \n\n" , name , age); /* 使用單雙引號 \"  */
    printf ("\\成績是%c\t身高%5.1f公分\n",level,height);  /* 使用兩個反斜線\\ */
   
    printf     ("\"printf 與 ( 中間可以以空白\" , 通常都不空\n\n"); 
   
    printf ("在台灣使用手機上網的低頭族，到今年已逼近80%% \n"); // 必須要用兩個 %    
    printf ("\a");  //發出警告音  
    printf ("\n");  //換行  

    system("pause"); 
    return 0;
}
