/* do-while-�s���J�r���A��[Esc]�䰱���J */ 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //�ϥ�getche��� 

int main (void)
{
   char ch;
   int num_char=-1; //�@��J�X�Ӧr���A����1 (Esc)�A�H�K�h�@�Ӧr�� 
   printf("�s���J�r��(�����[Esc]�䬰��):");
 
   do
   {
       ch = getche();  //���o��J�r�� 
       num_char++;     //�p��r�� �[ 1   
   }while(ch != 27);   //ASCII�Ȭ�27���Esc��A�Y�n�אּ[Enter]����A�אּ13 
 
   printf("\n�@��J%d�Ӧr��\n", num_char);
 
   system("pause");
   return 0;
}
