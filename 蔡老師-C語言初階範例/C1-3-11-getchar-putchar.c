/* �ϥ� getchar & putchar �r����� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char ch;
    
  printf("�п�J�@�Ӧr��(�駹�Ы�[Enter]):");
  ch = getchar();  /* �ϥ�getchar ��ܦb�ù��W ,������ */ 
  
  printf("�z��J���r���O:"); 
  putchar(ch);  /* ��ܦr�� */
  
  /* ���� 3 �� */ 
  putchar('\n'); 
  putchar('\n'); 
  putchar('\n'); 
  
  //putchar("\n"); //�r���ϥγ�޸��A���O ���޸� 
   
  printf("�Y��J�h�Ӧr�� , �]�u�|GET�Ĥ@�Ӧr�� \n");   
    
  system("pause");  
  return 0;
} 
