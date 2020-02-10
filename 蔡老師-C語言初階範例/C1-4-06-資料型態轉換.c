/* 資料型態 轉換 */
#include <stdio.h>
#include <stdlib.h>

int main()
{    
    int a=7 , b=2;
    float c;
    printf("**資料型態轉換： c=%d/%d\n",a,b);    
    
    c=a/b; 
    printf(" 1>整數相除 資料型態 未轉換 ,將結果顯示為 整數(錯誤)：%d\n", c);
    
    c=a/b; 
    printf(" 2>整數相除 資料型態 未轉換 ,將結果顯示為 float(錯誤)：%f\n", c);    
    
    //將計算結果 轉換為 float  
    c=(float)a/b; 
    //c=(float)(a/b); //錯誤：不能這樣寫，先算出為 3 ， 再將 3 轉為 3.0	 	 
    printf(" 3>整數相除 資料型態 轉換後 ,將結果顯示為 float(正確)：%f\n", c);
        
    /* 不需 強制型態轉換為 float , 因為運算元都已是 float */ 
    float x=50,y=22;
    printf("\n 4>浮點數相除(不用再轉換)：%.2f/%.2f = %.2f \n" , x , y , x/y);    
	
	/* 自動轉型：*/
	int p = 7;
	float q = 2.0 , r;
	r = p / q;
    printf("\n 5>整數 與 浮點數運算(不用再轉換，自動轉成大的型別(浮點數) )：%d / %.2f = %.2f \n\n" , p , q , p/q);    	   
    
    /* 若將資料型態數值範圍 大 轉 小，有可能會損失精確度 (數字不正確) */ 
    
    // 整數 int 資料範圍： -2147483648 ～ 2147483647   
    int i2 = 300.8;
    printf(" 6>整數中的 小數直接捨去：i2 = %d \n",i2); //小數直接捨去,不會四捨五入 

    int i3 = 2147483648 ;
    printf(" 7>超出整數 最大所能存放的數字(錯誤)：i3 = %d \n\n",i3); //超出整數 最大所能存放的數字:2147483647 

    // char 字元 資料範圍： -128 ～ 127
    char c2 = (char)70;
    printf(" 8>putchar(c2) = ");
	putchar(c2);
	printf("\n 9>printf 整數 %d \n",c2);
	putchar('\n');
	
    char c3 = (char)(700);
    printf(" 10>(char)(700)：超出字元 資料範圍：c3 = ");
	putchar(c3);
    	
	putchar('\n');            
    system("pause");
    return 0;
}
