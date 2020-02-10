/* for-continue--印出區間內所有3的倍數 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum,a,b,i;
    sum = 0; 
    
    printf("請輸入 起始值與終止值(請用逗號隔開 , 如：5,20)：");
    scanf("%d , %d",&a,&b); 

    for(i=a ; i<=b ; i++)
    {      
        if(i%3 !=0){ //當i值不為3的倍數(餘數 不是 0 )        
           continue; //略過下面的 code，移至 for中的 i++，再判斷 i <= b  
        }
      
        sum = sum + i; 
        printf("%d , ",i); //印出為3的倍數之 i 值 
    }
    printf("\n\n從%d 到 %d 之間的 3 的倍數和 = %d\n",a,b,sum);  
    
    system("pause");  
    return 0;
}
