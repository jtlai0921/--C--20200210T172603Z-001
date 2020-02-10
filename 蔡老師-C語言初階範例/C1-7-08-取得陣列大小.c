/* 取得陣列大小--sizeof */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
    int i,n; //宣告變數 
    int a[]={7,5,3,1,2}; //整數陣列 
	char c[]={'a','b','c','d','e'}; //字元陣列 
	float f[]={1.8,200.36258,12.58,66.3,1.2}; //浮點數陣列 
	
	//TODO: 宣告double陣列  
     
    
    /*求出 a 陣列元素的個數 , 指定給 n */
  	n = sizeof(a)/sizeof(a[0]);  //以a陣列大小 除以 a[0] 的大小 
    for(i=0 ; i<n ; i++)
	{
 		printf("\n a[%d] = %d " , i , a[i] ) ;  
	}	
    printf("\n a整數 陣列記憶體空間：%d Bytes\n", sizeof(a));
   	   	
    /*求 c 陣列元素的個數 , 指定給 n */   
    n = sizeof(c)/sizeof(char);	 //以c陣列大小 除以 字元值 的大小 
   	for(i=0 ; i<n ; i++)
	{
		printf("\n c[%d] = %d " , i , c[i] ) ;  
	}
	printf("\n c字元 陣列記憶體空間：%d Bytes\n", sizeof(c));

    /*求 f 陣列元素的個數 , 指定給 n */   
    n = sizeof(f)/sizeof(float);		    
   	for(i=0 ; i<n ; i++)
	{
		printf("\n f[%d] = %f " , i , f[i] ) ;  
	}
	printf("\n f浮點數 陣列記憶體空間：%d Bytes\n\n", sizeof(f));
    
    // To Do: double
    /*求 double 陣列元素的個數，指定給 n */   
    
    
    /* 陣列延伸應用範例： CheckIDNo.c 檢查身份證號 */


    system("PAUSE");	
    return 0;
}
