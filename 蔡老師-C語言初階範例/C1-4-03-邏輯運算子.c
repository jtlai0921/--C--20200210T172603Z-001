/* �޿� �B��l &&  ||  !  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* @�۰ʶ}�� ���������G�����L�Ϥ� @ */
    system("START http://www.jtvb.tw/keyboard.jpg");     
    
    int a=30,b;
 
    printf("**�Y�B�⦡���G�G1��True(����)�A0��false(������)�Ga=30 \n\n");    
 
    b = (a>10 && a<99);  //a�j��10 �B a�p��99       
    printf("1. a>10 && a<99�G b=%d \n\n",b);
        
    b = (a>10 && a<20);
    printf("2. a>10 && a<20�G b=%d \n\n",b);
        
    b = (a>10 && a<20);
    b = !b;   // not b   !�� �ϦV�B��  
    printf("3. a>10 && a<20 , �A !b�G b=%d \n\n",b);          
        
    b = (a>10 || a>99);  //a�j��10 �� a�j��99          
    printf("4. a>10 || a>99�G b=%d \n\n",b);
    
    b = (a>200 || a>500);
    printf("5. a>200 || a>500�G�@b=%d \n\n",b);
          
    system("pause");
    return 0;
}
