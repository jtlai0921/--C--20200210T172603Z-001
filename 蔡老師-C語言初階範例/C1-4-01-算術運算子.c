/* ��N �B��l�G + - * /  % */
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a , b;  // �ԭz�H�������� 
    a=50;       // = �� ���w�B��l 
    b=25;

    printf("1> %d + %d = %d\n",a,b,a+b);
    printf("2> %d - %d = %d\n",a,b,a-b);
    printf("3> %d * %d = %d\n",a,b,a*b);
    printf("4> ��Ƭ۰��G%d / %d = %d\n",a,b,a/b); 
   
    printf("\n");   

    /* �D�l�� % */
    a=50,b=13;
    printf("5> ��Ƭ۰�,�D�l�ơG%d %% %d = %d\n",a,b,a%b);   
             
    system("pause");
    return 0;
}
