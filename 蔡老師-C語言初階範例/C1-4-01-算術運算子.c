/* 算術 運算子： + - * /  % */
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a , b;  // 敘述以分號結尾 
    a=50;       // = 為 指定運算子 
    b=25;

    printf("1> %d + %d = %d\n",a,b,a+b);
    printf("2> %d - %d = %d\n",a,b,a-b);
    printf("3> %d * %d = %d\n",a,b,a*b);
    printf("4> 整數相除：%d / %d = %d\n",a,b,a/b); 
   
    printf("\n");   

    /* 求餘數 % */
    a=50,b=13;
    printf("5> 整數相除,求餘數：%d %% %d = %d\n",a,b,a%b);   
             
    system("pause");
    return 0;
}
