/* for�j��--�h�ӹB�⦡ */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,k,counter=0 , total=0; //�ŧi����ܼơA�ñN����ܼ� total����ȳ]��0 

    //���� i<=10 �B k<30 �A �Y�N && �令 || �A���G�N���@�ˤF�A && �P �r��   
    for(i=1,k=3 ; i<=10 , k<30 ; i++,k+=5) 
      {      
         counter++;  
         total = total + i + k ;  //�Ntotal���ȦA�[�Wi�Pk���� 
         printf("\n�����%3d�� ,i�O%3d , k�O%4d ,�X�ptotal�G%5d\n",counter , i , k ,total);                  
      }
    printf("\n����%d�� , �X�p%d \n\n",counter ,total);  //�L�Xtotal���� 

    system("pause");   
    return 0;
} 
