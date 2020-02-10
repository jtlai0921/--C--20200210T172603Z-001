/* 宣告二維陣列 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//宣告二維陣列3x4,並指定值 
    int a[3][4]={ {0, 1, 2, 3} , {4, 5, 6, 7} , {8, 9, 10, 11} };
	int sum = 0 ;
	int i, j;

	//顯示陣列內容    
	for(i=0 ; i<3 ; i++)     // 第一維陣列維度為3，i 
	{		
		for(j=0 ; j<4 ; j++) // 第二維陣列維度為4，j 
		{
			printf(" a[%d][%d]=%2d , ", i, j, a[i][j]);
			sum += a[i][j];  //累加陣列每元素 
		}
		printf("\n"); 
	}

    //顯示陣列內容值的加總和 
	printf("\n===陣列 a 的總和為：%d \n\n", sum);

    system("PAUSE");	
    return 0;
}
