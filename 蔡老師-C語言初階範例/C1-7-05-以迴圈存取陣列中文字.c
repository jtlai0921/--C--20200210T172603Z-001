/* 鍵盤輸入字串 , 再以迴圈存取陣列元素值 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	 // strlen()函數定義於string.h 
#include <ctype.h>   // isascii()函數定義於ctype.h 
//輸入Code時 , 按空白勿使用到全型空白 

int main(void)
{
    // char name[100] = "巨匠 GO168";  //也可直接指定值  
	char name[100];	
	int i, str_num;
	
    printf("請輸入 中文字與英數字(如：巨匠 GO168)：");
	gets(name);  /* 輸入字串並將每一個字元逐一放到name陣列元素中 */	
		
    str_num=strlen(name);	/* strlen()函數計算字串有幾個字元 */
    printf("\n您輸入了 %d 個字元\n\n\n",str_num);
    
    //沒輸入字元,就馬上結束 
    if(str_num == 0) 
    {
       printf("\n您沒輸入字元 , 無法執行\n\n");
       system("PAUSE");	
       return 0;
    }
        
    //有輸入開始執行 
    printf("%s 您好^_^ \n\n", name);  /*顯示name字串*/    	    	
    printf("\n name陣列元素如下：\n");
    
	for(i=0 ; i<str_num ; i++) /* 逐一印出name每一個陣列元素的值 */
    //for(i=0 ; i<strlen(name) ; i++)   //上面那一行 也可寫成這樣，直接在 for() 計算字串長度 
	//for(i=0 ; name[i] != '\0' ; i++)  //上面那一行 也可寫成這樣，不是 \0 就會重複執行 		
	{    		
        //判斷是否為中文字 
        if (isascii(name[i]) == 0)
        {
            printf("\n第%2d與%2d個字元 是中文字：",i,i+1);   
            printf("%c%c",  name[i],name[i+1]); //多印一連續字元，才會顯示中文字 
            i++;  //再多移一字元 
        }
        else
        {                 
            printf("\n第%2d個字元 非中文字：",i);
            printf("%c", name[i]);                         
        }
	}	
	
	printf("\n\n直接用puts()顯示：");
	puts(name);	
	printf("\n");
	
    system("PAUSE");	
	return 0;
}
