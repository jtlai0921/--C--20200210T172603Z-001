/* �P�_�Ʀr�O�_�]�t�p�ơC */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,c;
	int b;
	
	printf("�п�J�Ʀr(�P�_�O�_���p��)�G");
	scanf("%f",&a);
	b=a;
	c=a;
	
	if((float)b != c)
	   printf("%f ���p��\n",a);
	else 
	   printf("%f �S���p��\n",a);
	   
	printf("a=%f\n",a);
	printf("b=%d\n",b);
	printf("c=%f\n",c);
	            
    system("PAUSE");	
    return 0;
}
