/* ��L��J�r��A�A�H�j��s���}�C������ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	/* strlen()��Ʃw�q�� string.h ��Ƥ� */

int main(void)
{
	char name[100];
	int i , str_num;
	
    printf("�п�J�m�W(�Х���^���,�A���դ���)�G");
	gets(name); /* ��J�r��ñN�C�@�Ӧr���v�@���name�}�C������ */	
	
    str_num=strlen(name); /* strlen()��ƥi�p��r�꦳�X�Ӧr�� */
    printf("\n�z��J�F %d �Ӧr��\n", str_num);
    
    if(str_num > 0) //����J�r���~���� 
    {         
       printf("%s �z�n^_^ \n\n", name);	/* ���name�r�� */    	    	
       printf("\n***name�}�C�����p�U�G\n");
       for(i=0 ; i<str_num ; i++) /* �v�@�L�Xname�C�@�Ӱ}�C�������� */
       {
    	   printf("name[%d]=%c\n", i, name[i]);
       }	
    }
	
    printf("\n");
    system("PAUSE");	
	return 0;
}
