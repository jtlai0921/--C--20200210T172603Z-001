/* while-continue--�L�X�϶����Ҧ�3������ */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum,a,b,i; 
    sum = 0; 
    
    printf("�п�J �_�l�ȻP�פ��(�Хγr���j�} , �p�G5,20)�G");
    scanf("%d,%d",&a,&b); 
    i = a;

    while(i <= b)
    {      
      if(i%3 !=0){ //�� i�Ȥ���3������(�l�� ���O 0 )       
         i++;      //�n�֥[ 1 , �Y��|����A�N�y���L�a�j��  
         continue; //���L�U���� code�A���� while �� , �P�_ i <= b  
      }
      
      sum = sum + i; 
      printf("%d , ",i); //�L�X��3�����Ƥ� i �� 
      i++;  //�n�֥[ 1�A�Y��|����A�N�y���L�a�j�� 
    }
    printf("\n\n�q%d �� %d ������ 3 �����ƩM = %d\n",a,b,sum);  
    
    system("pause");  
    return 0;
}
