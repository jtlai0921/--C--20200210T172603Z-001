/* ���Ǧ^�� */ 
//�p��BMI�G(Body Mass Index�^A�����G BMI = �魫(kg)/����(���ت�����m2)
#include <stdio.h>
#include <stdlib.h>

/* countBmi��ƪ��D��{���m�󦹳B�A���ݭ쫬�ŧi */ 
double countBmi(double h , double w) //���Ǧ^�� �P ���ǤJ�� 
{     
   h = h / 100 ;  //�����ഫ������ 
   printf("\n�z�������G%.2lf���� , �魫�G%.2lf����\n\n", h , w);   
   double b = w /(h*h);  //BMI = �魫(kg)/����(m2) 
   return b;   
   
   printf("��X�ӤF BMI ��\n"); /*�o��b return ��A���|��� */  
}

/* �� bmi�ƭ� �PŪ���G */
void result(double bmi) //�L�Ǧ^�� �P ���ǤJ�� 
{
   printf("--------------------\n");  
   printf("BMI�Ȭ��G%.2lf\n", bmi);   
    
   if(bmi >= 35)
      printf("????���תέD\n");          
   else if(bmi >= 30 && bmi < 35)
      printf("???���תέD\n");        
   else if(bmi >= 27 && bmi < 30)
      printf("??���תέD\n");      
   else if(bmi >= 24 && bmi < 27)
      printf("?�L ��\n");   
   else if(bmi >= 18.5 && bmi < 24)
      printf("***���`�d��***\n");            
   else if(bmi < 18.5)
      printf("!!!�魫�L��\n");  
      
   printf("--------------------\n\n");     
}


int main(void)
{
   double height, weight, bmi;

   printf("**�p�� BMI�G\n");
   
   printf("\n�п�J ����(����)�H");
   scanf("%lf",&height);

   printf("\n�п�J �魫(����)�H");
   scanf("%lf",&weight);

   bmi = countBmi(height,weight); //�I�sBMI���, �Ǧ^bmi��, �޼ƶ��� �Фũ�� 
   result(bmi); //�PŪ���G  

   result(30);  //�w�� bmi�ƭ� , �u�n�PŪ���G 
         
   system("pause");
   return 0;
}
