/* while-if �j�� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a,b,answer,counter=0;
  printf("���տ�J �p�G 3,8  \n\n"); 
  printf("�п�J ��Ʀr(�H�r���j�})�G");
  scanf("%d,%d",&a,&b);

  while(1)  //�L����i�J�j�� 
  { 
      printf("%d+%d=",a,b);
      scanf("%d",&answer);   
      counter++;  //���D���Ʋ֥[ 1 

      //�Y�ٲ��H�Uif , �|�y���L�a�j��  
      if(answer == a+b)  //����~�|���X�j��  
      {
         printf("����F!\n");  
         break;   //���X�j��    
      }
 
      if(counter==3)
      {
         printf("����3���F!\n");
         break;  //���X�j��   
      }            
  }

  system("pause");
  return 0;
}	
