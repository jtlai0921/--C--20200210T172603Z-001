/* do while-if else */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int money,choose;
   printf("��J��J�����B(�p 50)�G");
   scanf("%d",&money);
    
   do	
   {
      printf("\n�l�Bnt$ %d\n",money);
      printf("�п�ܡG1.�i��(15��) 2.�T��(12��) 3.����:");      
      scanf("%d",&choose); 
      
      if(choose == 1)
      { 
         if(money < 15)
            printf("���B�����R�i��\n");
         else
            money= money-15;
      }
      else if(choose == 2) 
      {
         if(money < 12)
            printf("���B�����R�T��\n");
         else
            money= money-12;
      }
            
//      if (money < 12)
//      {
//          printf("\n**�l�Bnt$ %d�A����$12�A�۰ʸ��X�j��\n\n" , money);
//          break;
//      }
    
    }while(choose == 1 || choose == 2);
    
    system("pause");
    return 0;
}	
