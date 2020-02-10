/*盻匡拒挡篶 if--秥耞 */ 
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int year;
  printf("代刚块 2000 , 1000  , 2012 , 2014 \n\n"); 
  printf("叫块﹁じ");
  scanf("%d",&year);
  
  if(year % 400 == 0)     //400计 
     printf("﹁じ%d琌 秥(400计)\n",year);
  else
  {
     if(year % 100 == 0)  //100计 
        printf("﹁じ%d琌 キ(100计)\n",year);
     else 
     {
        if(year % 4 == 0) //4计 
           printf("﹁じ%d琌 秥(4计)\n",year);
        else 
           printf("﹁じ%d琌 キ(ㄤウ计)\n",year);                              
     }     
  }
 
  system("PAUSE");	
  return 0;
}
