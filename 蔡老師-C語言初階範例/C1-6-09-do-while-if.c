/* do while-if else */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int money,choose;
   printf("輸入投入的金額(如 50)：");
   scanf("%d",&money);
    
   do	
   {
      printf("\n餘額nt$ %d\n",money);
      printf("請選擇：1.可樂(15元) 2.汽水(12元) 3.結束:");      
      scanf("%d",&choose); 
      
      if(choose == 1)
      { 
         if(money < 15)
            printf("金額不夠買可樂\n");
         else
            money= money-15;
      }
      else if(choose == 2) 
      {
         if(money < 12)
            printf("金額不夠買汽水\n");
         else
            money= money-12;
      }
            
//      if (money < 12)
//      {
//          printf("\n**餘額nt$ %d，不夠$12，自動跳出迴圈\n\n" , money);
//          break;
//      }
    
    }while(choose == 1 || choose == 2);
    
    system("pause");
    return 0;
}	
