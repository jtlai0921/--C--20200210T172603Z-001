/* 設定字元陣列初值 */ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
   //語法1：逐一指定字元 
   char a[10]= {'T','o','n','y'}; 

   //語法2：直接指定一字串 
   char b[10]= "Tony" ;  

   //語法3：直接指定一字串 , 加大括號 
   char c[10]= {"Tony"} ;   

   //顯示字元陣列值 
   printf("%c%c%c y \n\n",a[0],b[1],c[2] );
  
  
   char d[2]= {"TonyMary"}  ;  //只宣告2個陣列元素，卻要存8個字元 ?  
   printf("d[6]=%c\n\n",d[6] );
 
   printf("設定 字元陣列初值完成\n\n");

   system("pause"); 
   return 0;       
}
