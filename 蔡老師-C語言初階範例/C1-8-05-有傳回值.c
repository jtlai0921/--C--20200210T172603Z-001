/* 有傳回值 */ 
//計算BMI：(Body Mass Index）A公式： BMI = 體重(kg)/身高(公尺的平方m2)
#include <stdio.h>
#include <stdlib.h>

/* countBmi函數的主體程式置於此處，不需原型宣告 */ 
double countBmi(double h , double w) //有傳回值 與 有傳入值 
{     
   h = h / 100 ;  //身高轉換為公尺 
   printf("\n您的身高：%.2lf公尺 , 體重：%.2lf公斤\n\n", h , w);   
   double b = w /(h*h);  //BMI = 體重(kg)/身高(m2) 
   return b;   
   
   printf("算出來了 BMI 啦\n"); /*這行在 return 後，不會顯示 */  
}

/* 依 bmi數值 判讀結果 */
void result(double bmi) //無傳回值 與 有傳入值 
{
   printf("--------------------\n");  
   printf("BMI值為：%.2lf\n", bmi);   
    
   if(bmi >= 35)
      printf("????重度肥胖\n");          
   else if(bmi >= 30 && bmi < 35)
      printf("???中度肥胖\n");        
   else if(bmi >= 27 && bmi < 30)
      printf("??輕度肥胖\n");      
   else if(bmi >= 24 && bmi < 27)
      printf("?過 重\n");   
   else if(bmi >= 18.5 && bmi < 24)
      printf("***正常範圍***\n");            
   else if(bmi < 18.5)
      printf("!!!體重過輕\n");  
      
   printf("--------------------\n\n");     
}


int main(void)
{
   double height, weight, bmi;

   printf("**計算 BMI：\n");
   
   printf("\n請輸入 身高(公分)？");
   scanf("%lf",&height);

   printf("\n請輸入 體重(公斤)？");
   scanf("%lf",&weight);

   bmi = countBmi(height,weight); //呼叫BMI函數, 傳回bmi值, 引數順序 請勿放錯 
   result(bmi); //判讀結果  

   result(30);  //已知 bmi數值 , 只要判讀結果 
         
   system("pause");
   return 0;
}
