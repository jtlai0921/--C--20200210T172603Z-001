/* ���Y �B��l >  <  ==  >=  <= !=  */
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a=50,b=22;

    printf("**�Y�B�⦡���G�G1��True(����)�A0��false(������)\n\n");
    printf("a=%d , b = %d\n",a,b);
   
    printf("1> %d >  %d ���G�G%d \n"  ,a,b,a>b);
    printf("2> %d <  %d ���G�G%d \n\n",a,b,a<b);
    
    printf("3> %d >= %d ���G�G%d \n"  ,a,b,a>=b);
    printf("4> %d == %d ���G�G%d \n\n",a,b,a==b);
    
    printf("5> 38 == 38 ���G�G%d \n"  ,38==38);   
    printf("6> %d != %d ���G�G%d \n\n",a,b,a!=b);
           
    system("pause");
    return 0;
}
