/* 肚患皚秈ㄧ计 */
#include <stdio.h>
#include <stdlib.h>

void Myfunc(int[] , int , int); //ㄧ计 MyfuncΤま计琌皚 

int main(void)
{
    int a[]={3,6,9}; //皚﹚ 
    int i , n;
    n = sizeof(a)/sizeof(a[0]); //璸衡皚じ计 
        
    printf("\n磅︽璹ㄧ计 Myfunc玡皚ず甧\n");
    for(i=0 ; i<n ; i++)
        printf("a[%d]=%d\n",i,a[i]);  //皚ず甧         
           
    Myfunc(a,n,30); //㊣ㄧ计Myfunc肚皚a  
    
    printf("\n磅︽璹ㄧ计 Myfunc皚ず甧\n");
    for(i=0 ; i<n ; i++)
        printf("a[%d]=%d\n",i,a[i]);  //皚ず甧  
    
    system("pause"); 
    return 0;
}

//璹ㄧ计 Myfunc , 肚皚盢皚–じ 糤琘(add) 
void Myfunc(int a[] , int n , int add) 
{
   int i;           
   for(i=0 ; i<n ; i++)
       a[i] += add;       
}
