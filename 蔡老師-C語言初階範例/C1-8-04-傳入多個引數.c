/* 肚ま计-ぃ篈 */ 
#include <stdio.h>
#include <stdlib.h>

void showline(char,int); /* ㄧ计 */

int main(void)
{
   showline('$',20);    
   printf("㊣礶絬ㄧ计");
  
   showline('@',40);
   printf("ㄧ计砆㊣Ω");
  
   showline('?',60);
   
   //硂︽㊣碞岿, ぶま计 
   //showline('*');  
   
   //TODO : 琵ㄏノ 块 才腹 籔 才腹计秖, 盢跑计 肚ㄧ计い  
   

   system("pause");
   return 0;
}


//ㄌ肚才腹籔计秖,礶兵才腹絬 
void showline(char mChar,int mNum)  //礚肚 籔 Τ肚() 
{
   int mLoop=1;
   
   printf("\n");   
   for(mLoop=1 ; mLoop<= mNum ; mLoop++)
   {
       printf("%c",mChar);   
   }          
   printf("\n");
}
