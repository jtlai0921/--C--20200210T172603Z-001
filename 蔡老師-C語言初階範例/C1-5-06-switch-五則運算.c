/* 用switch 做 五則計算 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
    int a,b;
    char oper;
    
    printf("**計算運算式：分別輸入如 5 * 8 \n\n");

    printf("請輸入 第1個數字：");    
    scanf("%d",&a);
    
    fflush(stdin); //清除鍵盤緩衝區的內容，以免影響 後面輸入的內容     
    printf("請輸入 運算子( + - * / %%(求餘數) )：");
    scanf("%c",&oper);
    
    fflush(stdin);        
    printf("請輸入 第2個數字：");
    scanf("%d",&b);    
    
    //TODO: 控制 除式分母不能為 0 
    

    switch(oper) //switch只能判斷 char 或 整數  
    {
      case '+':
        printf("%d %c %d = %d \n", a ,oper, b , a+b);
        break;
      case '-':            
        printf("計算結果為 %d\n", a-b); //TODO:請改成如上顯示的 printf 
        break;
      case '*':                   
        printf("計算結果為 %d\n", a*b);
        break;
      case '/':                    
        printf("計算結果為 %f\n", (float)a/b); //因為 a,b是 int，須要轉成 浮點數  
        break;
      case '%':                   
        printf("計算結果為 %d\n", a%b);
        break;        
      default:                                  
        printf("輸入的五則運算格式有誤\n");
    }

    system("pause");     
    return 0;
}
