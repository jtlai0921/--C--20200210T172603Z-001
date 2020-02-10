/* 單一狀況-使用多個 if判斷式 , 判斷輸入字元 */
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    char ch;
    printf("請輸入一個 英文字或數字："); 
    scanf("%c",&ch);               

    if(ch >= 'a' && ch <= 'z') /* && 不可改成 || */
       printf("輸入字元為：%c , 小寫字母\n",ch);

    //上面那一個 if 也可如下 寫成一行  
    //if(ch >= 'a' && ch <= 'z') printf("輸入字元為：%c , 小寫字母\n",ch);

    if(ch >= 'A' && ch <= 'Z'){ /* 若上列的 if 成立 , 仍會判斷此行敘述 */   
       printf("輸入字元為：%c , 大寫字母\n",ch);
    }  

    if(ch >= '0' && ch <='9') /* 若上列的 if 成立 , 仍會判斷此行敘述 */   
    {
       printf("輸入字元為：%c , 阿拉伯數字\n",ch);
    }

    system("pause");    
    return 0;
} 
