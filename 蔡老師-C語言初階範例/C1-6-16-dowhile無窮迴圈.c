/* do...while�L�a�j�� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number=0;
    printf("do...while�j��@������A�n��[Ctrl]+[C]��~����:\n");
    
    do
    {  	        
        number = number + 1;
        printf("\n�����%d��\n", number);
        _sleep(100);  //�Ȱ�0.1��  
           
        if(number >= 10){ 
           printf("\n�w�g����10���F , �n���u�F�I\n\n");
           //break;  //��|����,�y���L�a�j�� 
        }       
    }while(1); //���������P�_����û���true 
    
    system("pause");
    return 0;
}	
