/* �ܼƫŧi�覡--�ϥ�printf ��X���P����ƫ��A */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //�ŧi�ܼ�  
    char ch='c';    //�ŧi �r���ܼ�ch�A�ë��w�Ȭ�c 
    int i=123;      //�ŧi ����ܼ� i�A�ë��w�Ȭ�123 
  
    float f=5.3;    //�ŧi ���B�I���ܼ� f�A�ë��w�Ȭ�5.3 
    double d=2.86;  //�ŧi ����B�I���ܼ� d�A�ë��w�Ȭ�2.86   
  
    char name[10]="Tony";       //�ŧi �r���}�C�A�ë��w�� 
    char School[]="���K�q��" ;  //�ŧi���פ��T�w�� �r���}�C  
  
    printf("�ϥ�printf��X���P���ܼƸ�ƫ��A�G\n");
    printf("ch = %c\n",ch);  //�H �r�����A�L�X�ܼ� ch 
    printf("i = %d\n",i);    //�H ��ƫ��A�L�X�ܼ� i 
  
    printf("f = %f\n",f);    //�H ���B�I�ƫ��A�L�X�ܼ� f 
    printf("d = %lf\n",d);   //�H ����B�I�ƫ��A�L�X�ܼ� d 
  
    printf("My name = %s\n",name);   //�H�r�ꫬ�A�L�X�ܼ� name =
    printf("�ڪ����� = %s\n\n",School);   
    //printf("�ڪ����� = %s\n",school); //�`�N �ŧi���ܼƦW�� , ��1�Ӧr�����j�g  
    
    int a=28 , b=55;  //�ŧi�h�ܼ�,�ë��w��� 
    printf("a=%d , b=%d\n",a,b);

    //�ѧO�r�b�{���϶����O�ߤ@���W�١A�����\���ơC
    int sdd; 
    //int sdd  //���Ыŧi�F 

    //�^��r���A�Ϥ��j�p�g, �ҥHsdd�PSdd�����P���ܼ� 
    int Sdd; 
	
    //�u��H�^��r���Ω��u���}�Y�C����ϥΤ���R�W�C
    //int C�y��;
                         
    //���i�ϥΫO�d�r�Ψ�L��ƦW�١C�Ҧp�Gvoid�Bint�Bfor ...�� 
    //int void;

    //�ŧi�`�ơG  
    const  double pi=3.14159;
    printf("\n�ϥ�printf��X�`�Ƹ�ƫ��A\n");
    printf("pi = %lf\n\n",pi);  //�H��ƫ��A�L�X�`��num 
    //pi = 3.14;  //�`�ƫŧi��,����A����� 

    system("pause"); //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G 
    return 0;
} 
