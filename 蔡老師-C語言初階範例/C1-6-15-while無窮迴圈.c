/* while無窮迴圈 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number=0 , i=0;
    printf("while迴圈一直執行, 要按[Ctrl]+[C]鍵才停止:\n");

    while(1)  //無條件進入迴圈    
    {
       i++; 
       printf("%d\n",i); 
    
       //if(i>50)
       //   break; 
    } 
            
    system("pause");
    return 0;
}	
