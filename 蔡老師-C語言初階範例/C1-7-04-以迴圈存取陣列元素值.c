/* 鍵盤輸入字串，再以迴圈存取陣列元素值 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	/* strlen()函數定義於 string.h 函數內 */

int main(void)
{
	char name[100];
	int i , str_num;
	
    printf("請輸入姓名(請先輸英文後,再測試中文)：");
	gets(name); /* 輸入字串並將每一個字元逐一放到name陣列元素中 */	
	
    str_num=strlen(name); /* strlen()函數可計算字串有幾個字元 */
    printf("\n您輸入了 %d 個字元\n", str_num);
    
    if(str_num > 0) //有輸入字元才執行 
    {         
       printf("%s 您好^_^ \n\n", name);	/* 顯示name字串 */    	    	
       printf("\n***name陣列元素如下：\n");
       for(i=0 ; i<str_num ; i++) /* 逐一印出name每一個陣列元素的值 */
       {
    	   printf("name[%d]=%c\n", i, name[i]);
       }	
    }
	
    printf("\n");
    system("PAUSE");	
	return 0;
}
