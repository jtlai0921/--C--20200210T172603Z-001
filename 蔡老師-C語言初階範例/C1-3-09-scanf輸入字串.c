/* 使用 gets 輸入字串 */
#include <stdio.h>
#include <stdlib.h>

int main()
{   
    char name[100];  /* 宣告 字元陣列 */
    char name2[100];  
    
    printf("可輸入 兩個英文姓名：如 Tony Chan 與 Jack Lee (姓名中間有空白)\n\n");    
    printf("1>使用gets  輸入：");       
    gets(name);  /* name變數前不加 & 。輸入字串,並由 字元陣列 name 接收 */
 
    printf("2>使用scanf 輸入：");     
    scanf("%s",&name2); /* name變數 要加 &  */ 
        
    printf("\n若字串中有 空白 , 使用scanf,將無法取得出 空白後的字元 \n");
    printf("使用gets ：Hi %s, How are you ? \n", name);   /* gets：正常 印出字串內容 */ 
    printf("使用scanf：Hi %s, How are you ? \n", name2);  /* scanf：無法取得出 空白後的字元 */
    printf("\n");
    
    system("pause");
    return 0;
}
