/* round�|�ˤ��J��p���I */ 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // round

int main()
 {
   double num1,num2;
   
   printf("��J�@�ӯB�I��(�p 12345.6789)�G");
   scanf("%lf",&num1);
   
   //�D�|�ˤ��J���� 
   //num2 = round(num1);  //�]�i�H���p����w�� num2 
   printf("%lf �|�ˤ��J���� , ���G%lf\n", num1 , round(num1) );
   
   //�|�ˤ��J��p���I���2��  
   num2=round(num1*100)/100;
   printf("%lf �|�ˤ��J�� �p���I���2�쬰�G%lf\n", num1 , num2);
   
   // TODO: �N num1 �����3�� *1000/1000 , �A��ܥX�� (�p�W���k)  
    
  
   system("pause");   
   return 0;         
}
