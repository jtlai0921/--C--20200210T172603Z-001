/* �ϥ� getch�A getche�Agetchar ��ƿ�J�r�� */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  /* �ϥ� getche �� getch , ���� include */

int main()
{
  char ch1,ch2,ch3;
  printf("** �i���O��J a b c �T�Ӧr������\n");

  printf("\n1>�ϥ�getch�G��J��1�r��:");
  ch1 = getch();    /* �ϥ�getch  ����ܦb�ù��W,���� */ 
  printf("\n�z��J���r���O:%c\n\n",ch1);  

  printf("\n2>�ϥ�getche�G��J��2�r��:");
  ch2 = getche();   /* �ϥ�getche ��ܦb�ù��W,���� */ 
  printf("\n�z��J���r���O:%c\n\n",ch2);  
  
  printf("\n3>�ϥ�getchar�G��J��3�r��(�駹�Ы�[Enter]) :");
  ch3 = getchar();  /* �ϥ�getchar ��ܦb�ù��W,������ */ 
  printf("\n�z��J���r���O:%c\n\n",ch3);    

  printf("\n4>�ҿ�J3�Ӧr��:%d %d %d\n",ch1,ch2,ch3); //TODO�G�Эק惡��A��ܭ��J�r�� 

  printf("\n5>$$$�·бz �����@���� , �N�|�������{��.....");
  ch1 = getch();
  //system("pause"); //���Φ���g�k�A��H getch() ���N 
  return 0;
}
