/* for迴圈--多個運算式 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,k,counter=0 , total=0; //宣告整數變數，並將整數變數 total的初值設為0 

    //條件為 i<=10 且 k<30 ， 若將 && 改成 || ，結果就不一樣了， && 同 逗號   
    for(i=1,k=3 ; i<=10 , k<30 ; i++,k+=5) 
      {      
         counter++;  
         total = total + i + k ;  //將total的值再加上i與k的值 
         printf("\n執行第%3d次 ,i是%3d , k是%4d ,合計total：%5d\n",counter , i , k ,total);                  
      }
    printf("\n執行%d次 , 合計%d \n\n",counter ,total);  //印出total的值 

    system("pause");   
    return 0;
} 
