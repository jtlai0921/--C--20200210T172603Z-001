/* 關係 運算子 >  <  ==  >=  <= !=  */
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a=50,b=22;

    printf("**若運算式結果：1表True(成立)，0表false(不成立)\n\n");
    printf("a=%d , b = %d\n",a,b);
   
    printf("1> %d >  %d 結果：%d \n"  ,a,b,a>b);
    printf("2> %d <  %d 結果：%d \n\n",a,b,a<b);
    
    printf("3> %d >= %d 結果：%d \n"  ,a,b,a>=b);
    printf("4> %d == %d 結果：%d \n\n",a,b,a==b);
    
    printf("5> 38 == 38 結果：%d \n"  ,38==38);   
    printf("6> %d != %d 結果：%d \n\n",a,b,a!=b);
           
    system("pause");
    return 0;
}
