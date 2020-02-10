/* for無窮迴圈 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mtot=0;
    int number = 0; 
    printf("for迴圈一直執行, 要按[Ctrl]+[C]鍵才停止:");
    
    for(;;) //無條件進入迴圈    
    {
       mtot = mtot + 3000;       
       // number = number + 1;  //遺漏此行，造成無窮迴圈      
       printf("\n執行第%d次,%d\n", number,mtot);
       _sleep(500);  //暫停0.5秒 
      
       if(number >= 10)
          break;
    }    
    
    system("pause");
    return 0;
}	
