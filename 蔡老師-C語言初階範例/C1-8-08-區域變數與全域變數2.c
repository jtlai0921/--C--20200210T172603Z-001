/* �ϰ��ܼƻP�����ܼ�-Part2 */
#include <stdio.h>
#include <stdlib.h>

int z , sdd=100; //�ŧi�������ܼ� z 

int f(int);      //�ŧi�ۭq��� f 

int main(void)
{
    int x = 10 , y = 38 ; //��y�� main��ƪ� �ϰ��ܼ� 
    z=168; //��� �����ܼ� ���� 
    
    if (x>0)
    {
       int mblock = 8;  //mblock�� if�� �϶��ܼ�,�ͩR�g���u��if�϶��� 
       x = x + 100;
       printf("\n-->mblock= %d\n\n",mblock);
    }    
    // printf("\n-->mblock= %d\n\n\n",mblock); //���沾������ �N��          

    printf("\n\n�����ܼƪ� sdd�G%d\n\n" ,sdd);
    printf("�I�sf��ƫe�Gx = %d, y = %d, z=%d\n" , x , y ,z);

    y = f(x);  //�I�s f��� 
    
    printf("�I�sf��ƫ�Gx = %d, y = %d, z=%d\n" , x , y ,z);
        
    system("pause");    
    return 0;
}


//��ƥD��{��
int f(int x)
{
    z = 119;    //��� �����ܼ� ���� 
    int y = 13; //��y�� f��ƪ� �ϰ��ܼ� 
    
    //�� �ϰ��ܼ� �P �����ܼƦP�W�A�����ܼƪ��W�ٴN�Q����  
    int sdd = 5; //�ϰ��ܼ� sdd  
    printf("\n\n***f��ƪ� �ϰ��ܼ�sdd�G%d\n\n" ,sdd);
    
    return x + y + sdd ; //����[���O����ƪ� sdd 5�A�D�����ܼƪ� sdd  
}
