/* putchar:�N���w���y�r���z�A��X��ù� */
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    char text= 'B';
    int text_ascii=68;
    
    /* putchar ���|�۰ʴ��� */ 
    putchar('A');  /* �ǤJ �r���`�� , �L�X A */ 
    printf("\n");       
    
    putchar(text); /* �ǤJ �r���ܼ� , �L�X B */    
    //TODO : �N�W���o�@�� , ��g �� printf()  
	
	
	printf("\n");    
    putchar(67);  /* �ǤJ �ƭȱ`�� , �L�X C */  
    printf("\n");       
    
    putchar(text_ascii); /* �ǤJ �ƭ��ܼ� , �L�X D */      
    printf("\n");

    system("pause"); 
    return 0;
}
