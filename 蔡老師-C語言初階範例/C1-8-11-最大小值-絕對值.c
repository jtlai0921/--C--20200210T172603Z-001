/* fmax-fmin�D�̤j�ȻP�̤p��, fabs����� */ 
#include <stdio.h>
#include <stdlib.h>
#include <math.h> // fabs , fmax , fmin 

int main()
{
    double num1,num2,max,min;

    printf("��J��Ӽ�num1,num2(�H�r���j�}):");
    scanf("%lf,%lf",&num1,&num2);

    //�D����� 
    num1 = fabs(num1);  
    num2 = fabs(num2); 

    max=fmax(num1,num2);  //�D�̤j�� 
    min=fmin(num1,num2);  //�D�̤p�� 

    printf("�̤j��%.2lf�A�̤p�Ȭ�%.2lf \n" , max , min);

    system("pause");  
    return 0;        
}
