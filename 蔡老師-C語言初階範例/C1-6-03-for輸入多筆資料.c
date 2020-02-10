/* for輸入多筆資料 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     int i,n;
     int money,totalmoney=0;
    
     printf("測試輸入 如：3 \n\n");     
     printf("輸入您要買的商品之種類數目(n>=1):");
     scanf("%d",&n);
    
     for(i=1 ; i<=n ; i++)  
     {	
         printf("輸入第%d種商品的價格:",i);
         scanf("%d",&money);
         totalmoney = totalmoney + money; //加總金額  
     }
    
     printf("全部商品的總金額=%d \n\n", totalmoney);
    
     system("pause");
     return 0;
}
