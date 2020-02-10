/* if 單一狀況 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{    
    float money;
        
    printf("**請輸入 測試金額分別為：3000 ,  2000 , 5 \n\n");        
    printf("金額(大於2000打7折，並加$30手續費，小於等於2000沒打折不加手續費)\n");
    printf("購買金額：nt$ ");
	scanf("%f",&money); //取得輸入值 
   
    if(money > 2000)  /* 此判斷式沒加 {}，程式敘述只有一行，則{ }才能省略 */
      money = money * 0.7 ;  /* 否則只有if敘述下的第1行才算是if敘述的一部分 */     	                            
      money = money + 30 ;   /* 當>2000,可打7折,才要加 $30手續費 */
   
    printf("實際需付 %.2f \n\n", money);
    system("pause"); 
    return 0;
}
