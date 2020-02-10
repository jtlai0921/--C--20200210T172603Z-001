/* 遞增(減) 運算子 ++  --  */
#include <stdio.h>
#include <stdlib.h> 

int main(void)
{ 
    
    int pay , bonus ;
    /* 前置型 遞增運算子 */
    pay=100 , bonus = 200 ;
    printf("1> 執行前：pay=%d , bonus=%d \n",pay,bonus);  
    
	pay = ++bonus; //bonus會先加 1後，再指定給 pay，此行 等於下面這兩行 
	//bonus = bonus + 1;
	//pay = bonus;
    
	printf("   pay = ++bonus;\n");
    printf("   pay   = %d \n"  ,pay);
    printf("   bonus = %d \n\n",bonus);    

    /* 後置型 遞增運算子 */
    pay=100 , bonus = 200 ;
    printf("2> 執行前：pay=%d , bonus=%d \n",pay,bonus);    
    
	pay = bonus++; //bonus會先指定給 pay後，再加 1，此行 等於下面這兩行 
	//pay = bonus;
	//bonus = bonus + 1;
   	
	printf("   pay = bonus++;\n");
    printf("   pay   = %d \n",pay);
    printf("   bonus = %d \n",bonus);    
    printf("\n=====================================\n");        
    
    /* 後置型 遞增運算子 */    
    int a=0,b=1,c=0;   
    printf("3> 執行前：a=%d , b=%d , c=%d \n",a,b,c);
    
    c=a++ + b; //先處理c=a＋b;，然後再處理a++;
    /*等於下面這兩行  
    c=a + b;
    a = a + 1;   */       
    printf("   c=a++ + b ==>  a=%d , c=%d\n\n",a,c);     
        
        
    /* 前置型 遞增運算子 */
    int x=0,y=1,z=0;
    printf("4> 執行前：x=%d , y=%d , z=%d \n",x,y,z);    
    z=++x + y; //先處理++x;，然後再處理z=x＋y;
    /*等於下面這兩行  
    x = x + 1;
    z = x + y;  */            
    printf("   z=++x + y ==>  x=%d , z=%d\n\n",x,z);
    
	  
    /* 後置型 遞減運算子 */ 
    int e=0,f=1,g=0;
    printf("5> 執行前：e=%d , f=%d , g=%d \n",e,f,g);    
    g=e-- + f; //先處理g=e＋f;，然後再處理e--  */
    printf("   g=e-- + f ==>  e=%d , g=%d\n\n",e,g); 
    
    
    /* 前置型 遞減運算子 */ 
    int p=0,q=1,r=0;
    printf("6> 執行前：p=%d , q=%d , r=%d \n",p,q,r);    
    r=--p + q; //先處理--p;，然後再處理r=p＋q */
    printf("   r=--p + q ==>  p=%d , r=%d\n\n",p,r);
    
    system("PAUSE");	
    return 0;
}
