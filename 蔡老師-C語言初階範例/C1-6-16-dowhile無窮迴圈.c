/* do...while無窮迴圈 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number=0;
    printf("do...while迴圈一直執行，要按[Ctrl]+[C]鍵才停止:\n");
    
    do
    {  	        
        number = number + 1;
        printf("\n執行第%d次\n", number);
        _sleep(100);  //暫停0.1秒  
           
        if(number >= 10){ 
           printf("\n已經執行10次了 , 要收工了！\n\n");
           //break;  //遺漏此行,造成無窮迴圈 
        }       
    }while(1); //此結束的判斷條件永遠為true 
    
    system("pause");
    return 0;
}	
