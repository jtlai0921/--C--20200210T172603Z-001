/* 變數宣告方式--使用printf 輸出不同的資料型態 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //宣告變數  
    char ch='c';    //宣告 字元變數ch，並指定值為c 
    int i=123;      //宣告 整數變數 i，並指定值為123 
  
    float f=5.3;    //宣告 單精浮點數變數 f，並指定值為5.3 
    double d=2.86;  //宣告 倍精浮點數變數 d，並指定值為2.86   
  
    char name[10]="Tony";       //宣告 字元陣列，並指定值 
    char School[]="巨匠電腦" ;  //宣告長度不確定的 字元陣列  
  
    printf("使用printf輸出不同的變數資料型態：\n");
    printf("ch = %c\n",ch);  //以 字元型態印出變數 ch 
    printf("i = %d\n",i);    //以 整數型態印出變數 i 
  
    printf("f = %f\n",f);    //以 單精浮點數型態印出變數 f 
    printf("d = %lf\n",d);   //以 倍精浮點數型態印出變數 d 
  
    printf("My name = %s\n",name);   //以字串型態印出變數 name =
    printf("我的母校 = %s\n\n",School);   
    //printf("我的母校 = %s\n",school); //注意 宣告的變數名稱 , 第1個字母為大寫  
    
    int a=28 , b=55;  //宣告多變數,並指定其值 
    printf("a=%d , b=%d\n",a,b);

    //識別字在程式區塊中是唯一的名稱，不允許重複。
    int sdd; 
    //int sdd  //重覆宣告了 

    //英文字母，區分大小寫, 所以sdd與Sdd為不同的變數 
    int Sdd; 
	
    //只能以英文字母或底線為開頭。不能使用中文命名。
    //int C語言;
                         
    //不可使用保留字或其他函數名稱。例如：void、int、for ...等 
    //int void;

    //宣告常數：  
    const  double pi=3.14159;
    printf("\n使用printf輸出常數資料型態\n");
    printf("pi = %lf\n\n",pi);  //以整數型態印出常數num 
    //pi = 3.14;  //常數宣告後,不能再更改其值 

    system("pause"); //使程式暫停在執行畫面讓我們看到結果 
    return 0;
} 
