/* �ǻ��}�C�i��� */
#include <stdio.h>
#include <stdlib.h>

void Myfunc(int[] , int , int); //�ŧi��� Myfunc���@�Ӥ޼ƬO�}�C 

int main(void)
{
    int a[]={3,6,9}; //�ŧi�}�C�ë��w�� 
    int i , n;
    n = sizeof(a)/sizeof(a[0]); //�p��X�}�C�������Ӽ� 
        
    printf("\n����ۭq��� Myfunc�e�A�L�X�}�C���e�G\n");
    for(i=0 ; i<n ; i++)
        printf("a[%d]=%d\n",i,a[i]);  //�L�X�}�C���e         
           
    Myfunc(a,n,30); //�I�s���Myfunc�A�öǤJ�}�Ca  
    
    printf("\n����ۭq��� Myfunc��A�L�X�}�C���e�G\n");
    for(i=0 ; i<n ; i++)
        printf("a[%d]=%d\n",i,a[i]);  //�L�X�}�C���e  
    
    system("pause"); 
    return 0;
}

//�ۭq��� Myfunc , �ǤJ�}�C��A�N�}�C�C���� �W�[�Y�@��(add) 
void Myfunc(int a[] , int n , int add) 
{
   int i;           
   for(i=0 ; i<n ; i++)
       a[i] += add;       
}
