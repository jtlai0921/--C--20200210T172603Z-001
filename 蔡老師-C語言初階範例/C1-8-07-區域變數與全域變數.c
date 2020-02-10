/* 跋办跑计籔办跑计 */ 
#include <stdio.h>
#include <stdlib.h>

int a = 0; //办跑计  

/* funcㄧ计砰祘Α */
void func(void)
{
   int c = 2;  // c  func ㄧ计 跋办跑计 

   printf("\n\nfuncㄧ计讽いㄏノ跑计a㎝跑计c\n");
   printf("跑计a , funcい 璸衡玡 %d\n", a);
   a = a + 7;  // a 办跑计
   printf("跑计a , funcい 璸衡 %d\n", a);
  
   //硂︽磅︽Τ岿 ,ゼ跑计 b 
   //printf("跑计b%d\n", b); 
   
   c = c + 10;   
   printf("跑计c%d\n", c);
}


int main(void) /* mainㄧ计 */
{
   int b = 1;  // b  main ㄧ计 跋办跑计 

   printf("mainㄧ计讽いㄏノ跑计a㎝跑计b\n");
   printf("跑计a%d\n", a);
   printf("跑计b%d\n", b);
   
   //硂︽磅︽Τ岿 ,ゼ跑计 c 
   //printf("跑计c%d\n", c);

   func();  //材1Ω ㊣funcㄧ计 
   printf("\n跑计a , 材1Ω㊣func %d\n", a);
   
   func();  //材2Ω ㊣funcㄧ计 
   printf("\n跑计a , 材2Ω㊣func %d\n", a);   

   printf("\n\n");
   system("pause");
   return 0;
}
