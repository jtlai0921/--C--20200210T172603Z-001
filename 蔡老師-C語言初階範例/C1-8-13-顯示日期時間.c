/* 顯示日期時間函數 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{ 
  /* time_t表示的時間（日曆時間）是從一個時間點 
    （1970年1月1日0時0分0秒）到此時的秒數,是長整數型態 */
  time_t  t;
  
  //使用clock()函數來計時，回傳的資料型別為clock_ 
  clock_t  start_clock , end_clock;  
  double spend;
  char current_date[9];
  char current_time[9]; 

  //取得程式從開始執行到此函數,經過的滴答數(ticks) 
  start_clock=clock();  
                   
  //使用迴圈,讓時間一直顯示 
  while(1)  //無條件進入迴圈 , 1表 true 
  {     
     _sleep(1000);   //停頓1秒(1000/1000) 
     system("cls"); //清除畫面 
    
     //將目前的日期以MM/DD/YY方式，存入字串current_date內 
     _strdate(current_date);      

     //將目前的時間以HH：MM：SS方式，存入字串current_time內 
     _strtime(current_time);           
      
     //顯示日期時間 
     printf("目前日期：%s\n",current_date);  
     printf("現在時刻：%s\n",current_time);   
     
     //取得程式從開始執行到此函數,所經過的滴答數(ticks) 
     end_clock=clock();
  
     /* 計算開始執行到目前所花的時間,CLK_TCK是定義在time.h內的常數名稱， 
        其值等於1000(個滴答數/每秒除以 CLK_TCK 常數,即可得到所花的秒數 */ 
     spend =(double) (end_clock-start_clock)/CLK_TCK;    
     
     printf("\n程式開始執行至現在，所花時間：%.0lf 秒 \n", spend);             
                      
     t=time(NULL);  /* 自1970/1/1 00:00:00到目前所經過的秒數,NULL必須大寫 
                       執行的時間點不同，得到的秒數也不同 */
     printf("\n從1970/1/1 00:00:00到目前所經過的秒數：%d秒\n",t);                                                   
     printf("\n若要結束執行，請直接關閉視窗！");
  }    

  system("pause");
  return 0; 
} 
