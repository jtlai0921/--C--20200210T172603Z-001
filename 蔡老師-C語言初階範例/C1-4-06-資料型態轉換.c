/* ��ƫ��A �ഫ */
#include <stdio.h>
#include <stdlib.h>

int main()
{    
    int a=7 , b=2;
    float c;
    printf("**��ƫ��A�ഫ�G c=%d/%d\n",a,b);    
    
    c=a/b; 
    printf(" 1>��Ƭ۰� ��ƫ��A ���ഫ ,�N���G��ܬ� ���(���~)�G%d\n", c);
    
    c=a/b; 
    printf(" 2>��Ƭ۰� ��ƫ��A ���ഫ ,�N���G��ܬ� float(���~)�G%f\n", c);    
    
    //�N�p�⵲�G �ഫ�� float  
    c=(float)a/b; 
    //c=(float)(a/b); //���~�G����o�˼g�A����X�� 3 �A �A�N 3 �ର 3.0	 	 
    printf(" 3>��Ƭ۰� ��ƫ��A �ഫ�� ,�N���G��ܬ� float(���T)�G%f\n", c);
        
    /* ���� �j��A�ഫ�� float , �]���B�⤸���w�O float */ 
    float x=50,y=22;
    printf("\n 4>�B�I�Ƭ۰�(���ΦA�ഫ)�G%.2f/%.2f = %.2f \n" , x , y , x/y);    
	
	/* �۰��૬�G*/
	int p = 7;
	float q = 2.0 , r;
	r = p / q;
    printf("\n 5>��� �P �B�I�ƹB��(���ΦA�ഫ�A�۰��ন�j�����O(�B�I��) )�G%d / %.2f = %.2f \n\n" , p , q , p/q);    	   
    
    /* �Y�N��ƫ��A�ƭȽd�� �j �� �p�A���i��|�l����T�� (�Ʀr�����T) */ 
    
    // ��� int ��ƽd��G -2147483648 �� 2147483647   
    int i2 = 300.8;
    printf(" 6>��Ƥ��� �p�ƪ����˥h�Gi2 = %d \n",i2); //�p�ƪ����˥h,���|�|�ˤ��J 

    int i3 = 2147483648 ;
    printf(" 7>�W�X��� �̤j�ү�s�񪺼Ʀr(���~)�Gi3 = %d \n\n",i3); //�W�X��� �̤j�ү�s�񪺼Ʀr:2147483647 

    // char �r�� ��ƽd��G -128 �� 127
    char c2 = (char)70;
    printf(" 8>putchar(c2) = ");
	putchar(c2);
	printf("\n 9>printf ��� %d \n",c2);
	putchar('\n');
	
    char c3 = (char)(700);
    printf(" 10>(char)(700)�G�W�X�r�� ��ƽd��Gc3 = ");
	putchar(c3);
    	
	putchar('\n');            
    system("pause");
    return 0;
}
