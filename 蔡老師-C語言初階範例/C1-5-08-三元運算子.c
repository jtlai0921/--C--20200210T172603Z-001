/* �T���B��l */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{    
    int a;
    printf("�п�J�n�P�_ �_�Ʃΰ��� ���Ʀr ? ");
    scanf("%d",&a);    

    // 1>��@�B�⦡ 
    a%2 ? printf("%d is �_��",a) : printf("%d is ����",a) ;  
    //TODO : �N�W���o�@�� , ��g �� if else  


    printf("\n\n");  
    // 2>�B�⦡�� �A�]�t�B�⦡ 
    float discount , pay;
    int total; 
    printf("�п�J�ʶR���B�G");
    scanf("%d", &total);
    discount=( total > 50000 ? 0.8 : ( total >= 10000 ? 0.9 : 1) );
    //TODO : �N�W���o�@�� , ��g�� if else if... else      


    pay = (float)total*discount ;
    printf("���B�O %d �� %.2f = ���I���B$ %.1f \n" ,total , discount , pay );
    
    //�]�i�H�p�U�g�k , �����N�p�⦡ , ��i printf 
    //printf("���B�O %d �� %.2f = ���I���B$ %.1f\n",total,discount, (float) total*discount);     
    system("pause"); 

    // 3>�ϥ� &&�޿�B��l �P�_ 
    system("cls");  //�M���e�� 
	int age;
	printf("\n=== �q�v�ʲ� ===\n");
	printf("�п�J�z���~�֡G");
	scanf("%d", &age);
	printf("�z�ʶR���O %s \n", age>=60? "�u�ݲ�": (age>=0 && age<=12 ? "�ൣ��" : "���H��"));	
    //TODO : �N�W���o�@�� , ��g�� if else if... else    


	printf("\n\n");
    system("pause"); 
    return 0;
}
