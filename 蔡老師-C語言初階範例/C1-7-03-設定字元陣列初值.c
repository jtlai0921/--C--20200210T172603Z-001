/* �]�w�r���}�C��� */ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
   //�y�k1�G�v�@���w�r�� 
   char a[10]= {'T','o','n','y'}; 

   //�y�k2�G�������w�@�r�� 
   char b[10]= "Tony" ;  

   //�y�k3�G�������w�@�r�� , �[�j�A�� 
   char c[10]= {"Tony"} ;   

   //��ܦr���}�C�� 
   printf("%c%c%c y \n\n",a[0],b[1],c[2] );
  
  
   char d[2]= {"TonyMary"}  ;  //�u�ŧi2�Ӱ}�C�����A�o�n�s8�Ӧr�� ?  
   printf("d[6]=%c\n\n",d[6] );
 
   printf("�]�w �r���}�C��ȧ���\n\n");

   system("pause"); 
   return 0;       
}
