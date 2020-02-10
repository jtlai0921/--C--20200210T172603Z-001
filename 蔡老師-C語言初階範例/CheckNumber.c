/* 判斷 輸入值 是否為數字 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float number; //宣告變數(可為 整數 或 浮點數) 
	
	printf("判斷 輸入值 是否為數字\n------------------------------\n"); 
	printf("請您輸入 數字 : "); 
	int ret = scanf("%f",&number); //使用變數 ret , 接收 scanf()回傳值 
	
	printf("ret = %d\n",ret); //印出 回傳值 ret 
	
	//判斷 輸入值  
	if(ret == 0){ //若回傳值為 0 , 則 不是數字 , 否則為數字 
	   printf("您輸入的 不是 數字：%f \n",number); 
	}else{
	   printf("您輸入的 是 數字：%f \n",number); 
	} 

    system("pause");  
    return 0;
}

