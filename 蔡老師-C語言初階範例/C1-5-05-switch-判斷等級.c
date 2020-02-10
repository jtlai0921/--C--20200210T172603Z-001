/* 用switch判斷等級 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int score; //此變數 若宣告為 float 或 double，編譯就錯了     
   printf("輸入成績：");
   scanf("%d",&score);
   /* TODO： 判斷 輸入值 是否為[數字]，請參考範例中的 CheckNumber.c */ 
   
   
   /* TODO：加上輸入錯誤控制( 0-100 ), 使用if else , 將switch 包入 */  
   

   switch(score/10)  //score為int，不轉型別，99/10就為9，小數位數就直接捨掉了 
   {
	 case 10:
        printf("給你一顆 富士apple\n"); //此case沒有break; 會直接執行下一個case程式  
     case 9:
        printf("給你一張獎狀\n");  
        printf("等級:A\n");
        break;   
     case 8:
        printf("等級:B\n");
        break;
     case 7:
        printf("等級:C\n");
        break;
     case 6:
        printf("等級:D\n");
        break;
    //TODO：請增加一個 case 5: 等級:E 的區段，下方區段條件式改為 等級:F        
        
     default: /*若default下無任何程式碼，則不可有 default: 這行 */  
	    printf("等級:E(不及格)\n"); 
   }

   system("pause");
   return 0;
}
