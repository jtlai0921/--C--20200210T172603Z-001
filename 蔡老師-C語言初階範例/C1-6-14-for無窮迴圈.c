/* for�L�a�j�� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mtot=0;
    int number = 0; 
    printf("for�j��@������, �n��[Ctrl]+[C]��~����:");
    
    for(;;) //�L����i�J�j��    
    {
       mtot = mtot + 3000;       
       // number = number + 1;  //��|����A�y���L�a�j��      
       printf("\n�����%d��,%d\n", number,mtot);
       _sleep(500);  //�Ȱ�0.5�� 
      
       if(number >= 10)
          break;
    }    
    
    system("pause");
    return 0;
}	
