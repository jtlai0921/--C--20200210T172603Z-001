/* C�y���{�� ���Ӱ϶� */

//***1.[�e�m�B�z���O��]--������  
#include <stdio.h>            /* ��J�ο�X��Ʈw */
#include <stdlib.h>           /* �зǨ�Ʈw */

#define MSG1 " ��    �B : "   /* �{���� "��   �B:"   �HMSG1�Ÿ����N */
#define MSG2 " �|    �� : "   /* �{���� "�|    ��:"  �HMSG2�Ÿ����N */
#define MSG3 " �t�|���B : "   /* �{���� "�t�|���B:"  �HMSG3�Ÿ����N */
#define TAX_RATE 0.05         /* �{���� �|�v 5%=0.05 �HTax_Rate�Ÿ����N */


//***2.�����ܼƫŧi�� (�i���i�L)  
const int price=18000;  /* �ŧiprice����������Ʊ`�ƨó]�w��� */


//***3.�ۭq��ƭ쫬�ŧi�� (�i���i�L)  
float get_tax(void);  /* �ŧiget_tax()���ۭq���  */


//***4.[�D��ư�]--������  
int main(void)
{
   // price = 10;  //�������� 
   float total;    /* �ŧitotal�t�|���B���ϰ��ܼơA��ƫ��O���B�I�� */
   printf(" %s %d \n\n" , MSG1, price);   /* ��ܥ��|���B */  
   total = price + get_tax();          	  /* �N����[�|�� �s�Jtotal�ܼƤ� */
   printf(" %s %.2f \n\n" , MSG3, total); /* ��ܧt�|���B */
                  
   system("PAUSE");		 /* �Ȱ�����H�[�ݰ��浲�G */
   return 0;           	 /* �����{������ */
}


//***5.�۩w��ưϥD��� (�i���i�L)  
//�Y�N�۩w���get_tax()���D�鲾�� maint()�D��ƪ��e���A�h��ƭ쫬�ŧifloat get_tax(void); �i�ٲ����g�C 
float get_tax()   	      /* �p��|�� */
{
  float tax;              /* �ŧitax�|�����ϰ��ܼơA��ƫ��O���B�I�� */
  tax=price*TAX_RATE;     /* �N������H�|�v�s�Jtax �ܼ� */
  printf(" %s %.2f \n" , MSG2, tax);  /* ��ܵ|�� */  
  return(tax);            /* �Ntax�|���Ǧ^main()�D��� �I�s�B*/
}

