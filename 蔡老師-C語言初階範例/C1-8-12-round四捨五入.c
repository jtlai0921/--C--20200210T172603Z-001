/* round四捨五入到小數點 */ 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // round

int main()
 {
   double num1,num2;
   
   printf("輸入一個浮點數(如 12345.6789)：");
   scanf("%lf",&num1);
   
   //求四捨五入到整數 
   //num2 = round(num1);  //也可以先計算指定給 num2 
   printf("%lf 四捨五入到整數 , 為：%lf\n", num1 , round(num1) );
   
   //四捨五入到小數點後第2位  
   num2=round(num1*100)/100;
   printf("%lf 四捨五入到 小數點後第2位為：%lf\n", num1 , num2);
   
   // TODO: 將 num1 取到第3位 *1000/1000 , 再顯示出來 (如上做法)  
    
  
   system("pause");   
   return 0;         
}
