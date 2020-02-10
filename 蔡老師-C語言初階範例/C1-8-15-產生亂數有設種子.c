/* 隨機產生0-32767之間的整數--設定亂數種子 , 數字每次會不一樣 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{    
    int i;
    int seed = time(NULL);  //設定亂數種子，NULL必須大寫 

    printf("seed = %d \n\n",seed); //自1970/1/1 至今的秒數 
    srand(seed);  //若是同一數字，則每次執行都一樣  

    // 隨機產生 7 個整數   
    for(i = 0 ; i < 8; i++)
    {
        int r = rand();
        int m = r % 8; /* 除42的餘數 為 0-41 */ 
        m = m + 1;      /* 加1後就為 1-42 的數字 */  
        printf("原亂數：%6d　1→30間的亂數：%4d\n", r, m);
    }

    printf("\n");
    system("pause");
    return 0;
}
