/* 跋办跑计籔办跑计-static */
#include <stdio.h>
#include <stdlib.h>

int a ;  //办跑计 a璝ゼ﹚笆0 ㄓ秈︽﹍て 

/* funcㄧ计﹚竡 */
void func(void)
{
   //int b;  //跋办跑计 b ,璝ゼ﹚, 玥⊿Τ㏕﹚计 
   int b = 0;        
      
   //﹚static跋办跑计c ,穦﹍てΩ, funcㄧ计挡,癘拘丁ぃ穦メ斌 
   static int c ;  //﹚static跋办跑计c ,笆0 ㄓ秈︽﹍て

   printf("跑计a%d跑计b%d跑计c%d\n", a, b, c);

   a++;
   b++;
   c++;
   
   printf("跑计a%d跑计b%d跑计c%d\n\n", a, b, c);
}


int main(void)
{
   int i;
   // for癹伴 , 狡㊣ㄧ计 5Ω 
   for(i=0; i<5; i++)
       func();      

  system("pause");
  return 0;
}
