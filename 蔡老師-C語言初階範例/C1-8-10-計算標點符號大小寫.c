/* �p����I�Ÿ��P�j�p�g���ƶq */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  //isascii, isdigit, isalpha, islower, isupper, ispunct, isspace 
#include <string.h> //strlen  

int main()
 {
    //�ŧi�U�ܼ� �P ���w���  
    //char string[100] = "���KGO168 @,sdd" ; //�s���J���r�� , �Ϊ������w��  
    char string[100];  //�s���J���r��  

    int length=0;
    int digit=0;
    int space=0;
    int menglish=0;
    int lowercase=0;
    int uppercase=0;
    int punctuation=0;
    int chinese=0; 
    int i=0; 
  
    printf("��J�r��(�]�t ���^��(�j�p�g),�Ʀr,���I�Ÿ�,�ťյ�):");
    gets(string); 
  
    //�H�j����X��,�P�_�C�@��J�r�� 
    while(string[i] !='\0' ) 
    {               
        //ascii��>127:����r�]�Υ��Τ�r�^
        if(isascii(string[i])== 0) 
        { 
           chinese++;
           i++;   //����r(�Υ��Τ�r)��2bytes�A�n�h���@�Ӧr��    
        } 
        
        else if(isdigit(string[i])!= 0) //�Ʀr   
           digit++;  
        
        else if(isalpha(string[i]) != 0) //�^��r��     
        {       
           menglish++;  
           if(islower(string[i])!= 0) //�p�g 
              lowercase++;
           else if(isupper(string[i])!= 0) //�j�g 
              uppercase++;
        }
                    
        else if(ispunct(string[i])!= 0) //���I�Ÿ� 
           punctuation++;
           
        else if(isspace(string[i])!= 0) //�ť�  
           space++;
            
        i++; //�U���@�Ӧr�� 
    }

    //��ܦr�����O�έp 
    printf("\n\n��J�r��G%s" , string);
    printf("\n\n�`���׬��G%d byte\n\n" , strlen(string));
  
    printf("1.����r�]�Υ��Τ�r�^�� %d��\n" , chinese);
    printf("2.���ԧB�Ʀr�� %d��\n\n" ,digit);
    
    printf("3.�^��r���� %d��\n" ,menglish);    
    printf("4.�p�g�^�妳 %d��\n" ,lowercase);
    printf("5.�j�g�^�妳 %d��\n\n" ,uppercase);
    
    printf("6.���I�Ÿ��� %d��\n" ,punctuation);
    printf("7.�ťզr���� %d��\n\n" ,space);
  
    system("PAUSE");
    return 0;
 }
