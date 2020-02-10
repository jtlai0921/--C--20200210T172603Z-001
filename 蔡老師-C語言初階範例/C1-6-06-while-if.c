/* while-if 迴圈 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a,b,answer,counter=0;
  printf("測試輸入 如： 3,8  \n\n"); 
  printf("請輸入 兩數字(以逗號隔開)：");
  scanf("%d,%d",&a,&b);

  while(1)  //無條件進入迴圈 
  { 
      printf("%d+%d=",a,b);
      scanf("%d",&answer);   
      counter++;  //答題次數累加 1 

      //若省略以下if , 會造成無窮迴圈  
      if(answer == a+b)  //答對才會跳出迴圈  
      {
         printf("答對了!\n");  
         break;   //跳出迴圈    
      }
 
      if(counter==3)
      {
         printf("答錯3次了!\n");
         break;  //跳出迴圈   
      }            
  }

  system("pause");
  return 0;
}	
