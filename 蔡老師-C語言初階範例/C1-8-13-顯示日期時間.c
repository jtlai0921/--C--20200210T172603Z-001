/* ��ܤ���ɶ���� */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{ 
  /* time_t��ܪ��ɶ��]���ɶ��^�O�q�@�Ӯɶ��I 
    �]1970�~1��1��0��0��0��^�즹�ɪ����,�O����ƫ��A */
  time_t  t;
  
  //�ϥ�clock()��ƨӭp�ɡA�^�Ǫ���ƫ��O��clock_ 
  clock_t  start_clock , end_clock;  
  double spend;
  char current_date[9];
  char current_time[9]; 

  //���o�{���q�}�l����즹���,�g�L���w����(ticks) 
  start_clock=clock();  
                   
  //�ϥΰj��,���ɶ��@����� 
  while(1)  //�L����i�J�j�� , 1�� true 
  {     
     _sleep(1000);   //���y1��(1000/1000) 
     system("cls"); //�M���e�� 
    
     //�N�ثe������HMM/DD/YY�覡�A�s�J�r��current_date�� 
     _strdate(current_date);      

     //�N�ثe���ɶ��HHH�GMM�GSS�覡�A�s�J�r��current_time�� 
     _strtime(current_time);           
      
     //��ܤ���ɶ� 
     printf("�ثe����G%s\n",current_date);  
     printf("�{�b�ɨ�G%s\n",current_time);   
     
     //���o�{���q�}�l����즹���,�Ҹg�L���w����(ticks) 
     end_clock=clock();
  
     /* �p��}�l�����ثe�Ҫ᪺�ɶ�,CLK_TCK�O�w�q�btime.h�����`�ƦW�١A 
        ��ȵ���1000(�Ӻw����/�C���H CLK_TCK �`��,�Y�i�o��Ҫ᪺��� */ 
     spend =(double) (end_clock-start_clock)/CLK_TCK;    
     
     printf("\n�{���}�l����ܲ{�b�A�Ҫ�ɶ��G%.0lf �� \n", spend);             
                      
     t=time(NULL);  /* ��1970/1/1 00:00:00��ثe�Ҹg�L�����,NULL�����j�g 
                       ���檺�ɶ��I���P�A�o�쪺��Ƥ]���P */
     printf("\n�q1970/1/1 00:00:00��ثe�Ҹg�L����ơG%d��\n",t);                                                   
     printf("\n�Y�n��������A�Ъ������������I");
  }    

  system("pause");
  return 0; 
} 
