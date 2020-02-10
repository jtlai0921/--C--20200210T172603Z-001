/* printf格式錯誤 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  float num1=10.38;
  int  num2=20;	

               //num1的型態為 float，使用 %d格式錯誤 
  printf("錯誤：num1=%d ， num2=%f\n\n",num1,num2);  
                         //num2的型態為 int，使用 %f格式錯誤  

  printf("正確：num1=%f ， num2=%d\n\n",num1,num2); 
  
  system("PAUSE");
  return 0;
 }
