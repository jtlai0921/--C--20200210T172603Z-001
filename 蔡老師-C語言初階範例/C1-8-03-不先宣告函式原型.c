/* 宣告函數原型-函數主體程式 寫在main()上面 */ 
#include <stdio.h>
#include <stdlib.h>

//直接將 函數主體程式 寫在main()上面，就不須 宣告函數原型 
//int f(int,int); //宣告函數原型，此行不寫 

//函數主體程式 
int f(int x,int n)
{
    if(n==0) //若次方值為 0  
       return 1;
    else
    {     
       int i , result = 1;        
       for(i=1 ; i<=n ; i++){ //連續乘 基底數字 , 如3的5次方 = 3*3*3*3*3 
           result = result * x;  // x是 基底數字 
       }    
      
       return result;  //傳回計算結果, 此行不可省略, 且傳回值必須為 int 
    }        
}


int main(void)
{
    int x,n;
    printf("計算x的n次方，請輸入x與n (兩數字請空1格, 如 3 5):");    
    scanf("%d %d",&x,&n); 
    
    //呼叫 f 函數，計算次方 再顯示 
    printf("%d^%d = %d\n",x,n,f(x,n));  //可直接將呼叫函數，寫在printf中 
    
    system("pause");     
    return 0;
}
