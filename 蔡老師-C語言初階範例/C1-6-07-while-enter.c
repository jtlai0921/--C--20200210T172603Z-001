/* while-enter */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  //�ϥ�getche��� 
 
int main(void)
{
   int number=0;
   printf("�@�Ӧr���@�Ӧr����J(�����[Enter]��~����):");
    
   while(getche() != '\r'){    // \r��[Enter]�� , �]�i�אּ�^��r��,�p Q 
         number = number + 1;  // while���u���@��, �i�ٲ� { } 
   } 
   printf("\n�@��J%d�Ӧr��\n", number);
    
   system("pause");
   return 0;
}	
