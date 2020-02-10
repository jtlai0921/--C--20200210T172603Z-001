/* 簡潔 運算子 +=  -=  *=  /=  %=  */
#include <stdio.h>
#include <stdlib.h> 

int main(void)
{ 
    int a=6,b=3;  
    printf("計算前：a=%d , b=%d\n\n",a,b);     
   
    a+=b;  // 也可如 a = a + b;               
    printf("1> a+=b計算後：a=%d , b=%d\n",a,b);     

    a=6,b=3;
    printf("2> a-=b計算後：a= %d\n\n",a-=b);         

    a=6,b=3;
    printf("3> a*=b計算後：a= %d\n",a*=b); 

    a=6,b=3;
    printf("4> a/=b計算後：a= %d\n\n",a/=b); 

    a=9,b=2;
    printf("5> a%%=b計算前：a=%d , b=%d\n",a,b);       
    printf("   a%%=b計算後：a= %d\n\n" , a%=b); 
    
    system("PAUSE");	
    return 0;
}
