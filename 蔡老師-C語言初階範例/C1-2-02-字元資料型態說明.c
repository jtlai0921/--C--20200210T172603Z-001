/* �r�� ��ƫ��A���� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
      /* @�۰ʶ}�� ���������G�G/�K/�Q���i�� �ഫ���Q�i�� @ */
	  system("START http://www.jtvb.tw/desp/NumTra/NumTra.htm"); 
	  	
      int myChar='A';  /* �ŧi ����ܼ� myChar�A�ë��w�Ȭ� A */ 
      printf("�ϥ�printf��X���P����ƫ��A�G\n\n");
    
      printf("1>��ƫ��AmyChar = %d \n",myChar);  /* �H��� ���A�L�X �ܼ�myChar */
      printf("2>�r�����AmyChar = %c \n",myChar);  /* �H�r�� ���A�L�X �ܼ�myChar */      
      printf("3>�Q���i��myChar = %x \n",myChar);  /* �H�Q���i�� ���A�L�X �ܼ�myChar */    
      printf("4>�K�i��myChar   = %o \n",myChar);  /* �H�K�i�� ���A�L�X �ܼ�myChar */      
      printf("\n\n"); 
      
      int num=0101;   //�ŧi���K�i��, ����Q�i�� 65=8������ X 1 + 0 + 1
      printf("�����ŧi���K�i��Gint num=0101 (0�}�Y)�G\n");  
      printf("5>��ܬ��K�i��G%o\n",num);
      printf("6>��ܬ��Q�i��G%d\n",num);
      printf("7>��ܬ��Q���i��G%x\n",num);
      printf("8>��ܬ���r�G%c\n",num);   
      printf("\n\n");   
        
      int num2=0x41;  //�ŧi���Q���i��, ����Q�i�� 65=16��1���� X 4 + 1    
      printf("�����ŧi���Q���i��Gint num2=0x41 (0x�}�Y)�G\n");
      printf("9> ��ܬ��K�i��G%o\n",num2);
      printf("10>��ܬ��Q�i��G%d\n",num2);
      printf("11>��ܬ��Q���i��G%x\n",num2);  
      printf("12>��ܬ���r�G%c\n",num2);
      printf("\n");    
	        
      system("pause");  
      return 0;
} 

