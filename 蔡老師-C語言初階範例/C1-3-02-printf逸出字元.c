/* printf �h�X�r�� */ 
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    char name[20]= "Mike Lee"; 
    int age=28;
    char level='A';
    float height=178.5;   
    
    printf ("�ڪ��W�r�s \"%s\" \t���~ %d �� \n\n" , name , age); /* �ϥγ����޸� \"  */
    printf ("\\���Z�O%c\t����%5.1f����\n",level,height);  /* �ϥΨ�Ӥϱ׽u\\ */
   
    printf     ("\"printf �P ( �����i�H�H�ť�\" , �q�`������\n\n"); 
   
    printf ("�b�x�W�ϥΤ���W�����C�Y�ڡA�줵�~�w�G��80%% \n"); // �����n�Ψ�� %    
    printf ("\a");  //�o�Xĵ�i��  
    printf ("\n");  //����  

    system("pause"); 
    return 0;
}
