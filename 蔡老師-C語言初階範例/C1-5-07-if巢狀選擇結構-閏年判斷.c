/*�_����ܵ��c if--�|�~�P�_ */ 
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int year;
  printf("���տ�J �p�G2000 , 1000  , 2012 , 2014 \n\n"); 
  printf("�п�J�褸�~���G");
  scanf("%d",&year);
  
  if(year % 400 == 0)     //�~����400������ 
     printf("�褸%d�O �|�~(400������)\n",year);
  else
  {
     if(year % 100 == 0)  //�~����100������ 
        printf("�褸%d�O ���~(100������)\n",year);
     else 
     {
        if(year % 4 == 0) //�~����4������ 
           printf("�褸%d�O �|�~(4������)\n",year);
        else 
           printf("�褸%d�O ���~(�䥦�Ʀr)\n",year);                              
     }     
  }
 
  system("PAUSE");	
  return 0;
}
