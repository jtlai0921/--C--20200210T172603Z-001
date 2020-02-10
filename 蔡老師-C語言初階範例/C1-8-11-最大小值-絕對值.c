/* fmax-fmin―程籔程, fabs荡癸 */ 
#include <stdio.h>
#include <stdlib.h>
#include <math.h> // fabs , fmax , fmin 

int main()
{
    double num1,num2,max,min;

    printf("块ㄢ计num1,num2(硆腹筳秨):");
    scanf("%lf,%lf",&num1,&num2);

    //―荡癸 
    num1 = fabs(num1);  
    num2 = fabs(num2); 

    max=fmax(num1,num2);  //―程 
    min=fmin(num1,num2);  //―程 

    printf("程%.2lf程%.2lf \n" , max , min);

    system("pause");  
    return 0;        
}
