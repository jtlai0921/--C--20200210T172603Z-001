/* �ϥ�scanf��J �h���ܼ� */
#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int length,width;
    
    printf("����ഫ�W��A�H�ťչj�}(�Τ���)�A��J�ɥi�H[�ť�]��[Enter]�Ϲj�ܼ� \n");
    printf("��J����Ϊ��� �e:");    

    scanf ("%d%d" , &length,&width); //��� %d%d �����]�i�H ���ť� 
    
    printf ("\n����%d", length);
    printf ("�A�e��%d �����n=", width);
    printf ("%d \n\n", length*width);  /* �����N������m �޼ư� */
    
    
    /* �����ഫ�W�� �� �Ϲj�Ÿ� */ 
    printf("����ഫ�W��A�H�r���j�}�A��J�ɴN�����H �r���Ϲj�ܼ� \n");
    printf("��J����Ϊ���,�e:");
    
    scanf ("%d,%d" , &length,&width); //%d,%d �����H �r���j�}�A��J����ƶ��]���� �H�r���j�}    
    printf ("\n����%d , �e��%d �����n=%d \n", length , width , length*width);
            
    system("pause");
    return 0;
}
