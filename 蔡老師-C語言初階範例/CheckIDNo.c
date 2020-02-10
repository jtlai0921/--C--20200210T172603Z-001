/* 檢查 身份證號 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	//strlen()函數 & strupr()函數，定義於string.h 

int main(void)
{
	/* 1>宣告變數 */
	char idNo[10]; //身份證號  
	int i;         //for迴圈計數器  
	int err = 0 ;  //錯誤數量  
	
	/* 2>輸入 身份證號 */	
	printf("請輸入 身份證號：");
	gets(idNo);
	strupr(idNo); //將字串中的 小寫英文字母 轉成大寫  
	printf("您輸入的 身份證號：%s，共有%d個字\n",idNo,strlen(idNo) );
	
	/* 3>檢查長度是否為10個字元 */	
	if(strlen(idNo) != 10){
	   printf("輸入錯誤：身份證號 必須為10個字元\n");
       system("pause");	
	   return 0;
	}
		
	/* 4>檢查 第 0/1/2-9 個字元 */		
	for(i=0 ; i<strlen(idNo) ; i++) {
		if(i==0){ //檢查第 0 個字元，是否為 大寫英文字母     
			if(idNo[i] < 65 || idNo[i] > 90){
			   printf("第 %d 個字元 不是大寫英文字 \n",i+1);
			   err++;
			}		
		}else if(i==1){ //檢查第 1 個字元，是否為 1 或 2 
			if(idNo[i] < 49 || idNo[i] > 50){
			   printf("第 %d 個字元 不是 1 或 2  \n",i+1);
			   err++;
			}									
		}else{ //檢查第 2-9 個字元，是否為 數字
			if(idNo[i] < 48 || idNo[i] > 57){
			   printf("第 %d 個字元 不是 數字 \n",i+1);
			   err++;			   
			}						
		}		  		
	}
	
	/* 5>顯示 結果 */		
	if(err == 0)
	   printf("\n輸入正確\n");
	else
	   printf("\n共有 %d 個錯誤\n",err);	   
	
    system("PAUSE");	
	return 0;
}	
