/* ��L��J�r�� , �A�H�j��s���}�C������ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	 // strlen()��Ʃw�q��string.h 
#include <ctype.h>   // isascii()��Ʃw�q��ctype.h 
//��JCode�� , ���ťդŨϥΨ�����ť� 

int main(void)
{
    // char name[100] = "���K GO168";  //�]�i�������w��  
	char name[100];	
	int i, str_num;
	
    printf("�п�J ����r�P�^�Ʀr(�p�G���K GO168)�G");
	gets(name);  /* ��J�r��ñN�C�@�Ӧr���v�@���name�}�C������ */	
		
    str_num=strlen(name);	/* strlen()��ƭp��r�꦳�X�Ӧr�� */
    printf("\n�z��J�F %d �Ӧr��\n\n\n",str_num);
    
    //�S��J�r��,�N���W���� 
    if(str_num == 0) 
    {
       printf("\n�z�S��J�r�� , �L�k����\n\n");
       system("PAUSE");	
       return 0;
    }
        
    //����J�}�l���� 
    printf("%s �z�n^_^ \n\n", name);  /*���name�r��*/    	    	
    printf("\n name�}�C�����p�U�G\n");
    
	for(i=0 ; i<str_num ; i++) /* �v�@�L�Xname�C�@�Ӱ}�C�������� */
    //for(i=0 ; i<strlen(name) ; i++)   //�W�����@�� �]�i�g���o�ˡA�����b for() �p��r����� 
	//for(i=0 ; name[i] != '\0' ; i++)  //�W�����@�� �]�i�g���o�ˡA���O \0 �N�|���ư��� 		
	{    		
        //�P�_�O�_������r 
        if (isascii(name[i]) == 0)
        {
            printf("\n��%2d�P%2d�Ӧr�� �O����r�G",i,i+1);   
            printf("%c%c",  name[i],name[i+1]); //�h�L�@�s��r���A�~�|��ܤ���r 
            i++;  //�A�h���@�r�� 
        }
        else
        {                 
            printf("\n��%2d�Ӧr�� �D����r�G",i);
            printf("%c", name[i]);                         
        }
	}	
	
	printf("\n\n������puts()��ܡG");
	puts(name);	
	printf("\n");
	
    system("PAUSE");	
	return 0;
}
