/* 不用迴圈累加 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum=0;
    
    //不用迴圈 , 得逐項加總 
    sum = sum+1;  //也可寫成 sum++ ; 
    sum = sum+2;  //也可寫成 sum += 2; 
    sum = sum+3;	
    sum = sum+4         ; //空好幾格 , 再加; 也Ok 
    sum = sum+5;	
    sum = sum+6   ;
    sum = sum+7;	
    sum = sum+8 ;
    sum = sum+9;	
    sum = sum+10;
    
    printf("1+2+…+10=%d\n",sum);
    
    system("pause");
    return 0;
}
