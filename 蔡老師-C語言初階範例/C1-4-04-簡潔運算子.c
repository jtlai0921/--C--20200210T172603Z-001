/* ²�� �B��l +=  -=  *=  /=  %=  */
#include <stdio.h>
#include <stdlib.h> 

int main(void)
{ 
    int a=6,b=3;  
    printf("�p��e�Ga=%d , b=%d\n\n",a,b);     
   
    a+=b;  // �]�i�p a = a + b;               
    printf("1> a+=b�p���Ga=%d , b=%d\n",a,b);     

    a=6,b=3;
    printf("2> a-=b�p���Ga= %d\n\n",a-=b);         

    a=6,b=3;
    printf("3> a*=b�p���Ga= %d\n",a*=b); 

    a=6,b=3;
    printf("4> a/=b�p���Ga= %d\n\n",a/=b); 

    a=9,b=2;
    printf("5> a%%=b�p��e�Ga=%d , b=%d\n",a,b);       
    printf("   a%%=b�p���Ga= %d\n\n" , a%=b); 
    
    system("PAUSE");	
    return 0;
}
