/* if else��ت��p */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //�]�ϥ� toupper ���  

int main(void)
{
    char rain;
    
    printf("**���եi��J y \n\n");
    printf("���ѭ��B���v�j��50%��(Y/N) ? ");
    scanf("%c",&rain);    //�r�����A�ܼơA�榡�Ÿ��� %c 
    rain = toupper(rain); //�N��J�r�� , �ন�j�g�r��   

    if(rain == 'y' || rain =='Y')  //�P�_��J�O�_��y�άOY 
      printf("�A�̦n�n�a��!\n");
    else    //��ϥΪ̨S����J y��Y�ɡA�i�Jelse�ԭz�� 
      printf("���Ӥ��|�U�B�A�����a�ʤF!\n");

    system("pause");     
    return 0;
}
