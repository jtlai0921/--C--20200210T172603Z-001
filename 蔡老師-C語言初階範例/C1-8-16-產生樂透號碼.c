/* 隨機產生 7個不同數字的樂透號碼整數 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//巨集定義：
#define SIZE 42 //樂透 最大值 (1-42) 
#define QTY 7   //樂透 號碼數量  

int main()
{
    int i;
    int seed = time(NULL); //設定亂數種子 , NULL必須大寫 
    srand(seed);

    int lotto[SIZE];

    //將 1~42數字, 放入陣列 lotto[0]～ lotto[41]
    for(i = 0 ; i < SIZE ; i++){
        lotto[i] = i+1;  //lotto[0]=1
    }

    int number; //開出的號碼 
    int r;      //亂數 
    int m;      //陣列索引編號 0 ~ 41 
    
    printf("***產生 %d 個樂透號碼：\n\n",QTY);
    for(i = 0 ; i < QTY ; i++)
    {
        do
        {
            r = rand();
            m = r % SIZE;  //決定取第幾個格子(索引編號) 
            number = lotto[m];
        }while(number==0); //號碼為 0 表示已經取出(控制號碼不能重複)  

        printf("抽出的號碼 %d 是：%2d \n", i+1 , number );

        lotto[m] = 0; //號碼已經取出，將該陣列元素存入 0   
    }

    printf("\n***摃龜恕不負責！！！\n\n");
    system("pause");
    return 0;
}
