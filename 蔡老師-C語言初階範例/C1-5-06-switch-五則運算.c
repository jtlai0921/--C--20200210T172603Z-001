/* ��switch �� ���h�p�� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
    int a,b;
    char oper;
    
    printf("**�p��B�⦡�G���O��J�p 5 * 8 \n\n");

    printf("�п�J ��1�ӼƦr�G");    
    scanf("%d",&a);
    
    fflush(stdin); //�M����L�w�İϪ����e�A�H�K�v�T �᭱��J�����e     
    printf("�п�J �B��l( + - * / %%(�D�l��) )�G");
    scanf("%c",&oper);
    
    fflush(stdin);        
    printf("�п�J ��2�ӼƦr�G");
    scanf("%d",&b);    
    
    //TODO: ���� �����������ର 0 
    

    switch(oper) //switch�u��P�_ char �� ���  
    {
      case '+':
        printf("%d %c %d = %d \n", a ,oper, b , a+b);
        break;
      case '-':            
        printf("�p�⵲�G�� %d\n", a-b); //TODO:�Ч令�p�W��ܪ� printf 
        break;
      case '*':                   
        printf("�p�⵲�G�� %d\n", a*b);
        break;
      case '/':                    
        printf("�p�⵲�G�� %f\n", (float)a/b); //�]�� a,b�O int�A���n�ন �B�I��  
        break;
      case '%':                   
        printf("�p�⵲�G�� %d\n", a%b);
        break;        
      default:                                  
        printf("��J�����h�B��榡���~\n");
    }

    system("pause");     
    return 0;
}
