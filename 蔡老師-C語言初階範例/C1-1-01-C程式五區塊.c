/* C語言程式 五個區塊 */

//***1.[前置處理指令區]--必須有  
#include <stdio.h>            /* 輸入及輸出函數庫 */
#include <stdlib.h>           /* 標準函數庫 */

#define MSG1 " 金    額 : "   /* 程式中 "金   額:"   以MSG1符號取代 */
#define MSG2 " 稅    金 : "   /* 程式中 "稅    金:"  以MSG2符號取代 */
#define MSG3 " 含稅金額 : "   /* 程式中 "含稅金額:"  以MSG3符號取代 */
#define TAX_RATE 0.05         /* 程式中 稅率 5%=0.05 以Tax_Rate符號取代 */


//***2.全域變數宣告區 (可有可無)  
const int price=18000;  /* 宣告price售價為全域整數常數並設定初值 */


//***3.自訂函數原型宣告區 (可有可無)  
float get_tax(void);  /* 宣告get_tax()為自訂函數  */


//***4.[主函數區]--必須有  
int main(void)
{
   // price = 10;  //不能更改其值 
   float total;    /* 宣告total含稅金額為區域變數，資料型別為浮點數 */
   printf(" %s %d \n\n" , MSG1, price);   /* 顯示未稅金額 */  
   total = price + get_tax();          	  /* 將售價加稅金 存入total變數中 */
   printf(" %s %.2f \n\n" , MSG3, total); /* 顯示含稅金額 */
                  
   system("PAUSE");		 /* 暫停執行以觀看執行結果 */
   return 0;           	 /* 結束程式執行 */
}


//***5.自定函數區主體區 (可有可無)  
//若將自定函數get_tax()的主體移到 maint()主函數的前面，則函數原型宣告float get_tax(void); 可省略不寫。 
float get_tax()   	      /* 計算稅金 */
{
  float tax;              /* 宣告tax稅金為區域變數，資料型別為浮點數 */
  tax=price*TAX_RATE;     /* 將售價乘以稅率存入tax 變數 */
  printf(" %s %.2f \n" , MSG2, tax);  /* 顯示稅金 */  
  return(tax);            /* 將tax稅金傳回main()主函數 呼叫處*/
}

