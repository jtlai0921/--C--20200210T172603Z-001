/*while迴圈 1+3+5+...+99累加奇數 */
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int sum=0;  //sum務必設初值 0  
    int i=1;    //計數器初值  
   
    while(i<=99) { //條件式   
       sum = sum + i;
       i=i+2;  //每次增加 2 , 也可寫成 i+=2;  
    }
    printf("1+3+5+…+99 = %d\n",sum);
    
    //TODO : 請將上列 while 迴圈改寫成 for 迴圈   
    
    
    system("pause");     
    return 0;
}
