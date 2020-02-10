/* if else if 多種狀況-判斷等級 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int score;    
    printf("請輸入您的成績：");
    scanf("%d",&score);
   
    //TODO：加上輸入錯誤控制 ( 0-100 )
    
	   
    /* 以下分數﹐必須 由高到低 排列，否則會誤判 */   
    if(score >= 90)          //是否為90分以上 
      printf("您為 甲等\n");
    else if(score >= 80)     //小於90但80以上 
      printf("您為 乙等\n");
    else if(score >= 70)     //小於80但70以上 
      printf("您為 丙等\n");
    else if(score >= 60)     //小於70但60以上 
       printf("您為 丁等\n");
    //TODO：請增加一個 >= 50的區段，下方區段條件式改為 >= 40   
       
    else if(score >= 50)     //小於60但50以上 
	   printf("您為 不及格\n");    
    else                     //其它 , 小於50分               
       printf("麻煩您去跳海\n");
    
    system("pause"); 
    return 0;
}
