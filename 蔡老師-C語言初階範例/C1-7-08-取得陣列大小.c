/* ���o�}�C�j�p--sizeof */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
    int i,n; //�ŧi�ܼ� 
    int a[]={7,5,3,1,2}; //��ư}�C 
	char c[]={'a','b','c','d','e'}; //�r���}�C 
	float f[]={1.8,200.36258,12.58,66.3,1.2}; //�B�I�ư}�C 
	
	//TODO: �ŧidouble�}�C  
     
    
    /*�D�X a �}�C�������Ӽ� , ���w�� n */
  	n = sizeof(a)/sizeof(a[0]);  //�Ha�}�C�j�p ���H a[0] ���j�p 
    for(i=0 ; i<n ; i++)
	{
 		printf("\n a[%d] = %d " , i , a[i] ) ;  
	}	
    printf("\n a��� �}�C�O����Ŷ��G%d Bytes\n", sizeof(a));
   	   	
    /*�D c �}�C�������Ӽ� , ���w�� n */   
    n = sizeof(c)/sizeof(char);	 //�Hc�}�C�j�p ���H �r���� ���j�p 
   	for(i=0 ; i<n ; i++)
	{
		printf("\n c[%d] = %d " , i , c[i] ) ;  
	}
	printf("\n c�r�� �}�C�O����Ŷ��G%d Bytes\n", sizeof(c));

    /*�D f �}�C�������Ӽ� , ���w�� n */   
    n = sizeof(f)/sizeof(float);		    
   	for(i=0 ; i<n ; i++)
	{
		printf("\n f[%d] = %f " , i , f[i] ) ;  
	}
	printf("\n f�B�I�� �}�C�O����Ŷ��G%d Bytes\n\n", sizeof(f));
    
    // To Do: double
    /*�D double �}�C�������ӼơA���w�� n */   
    
    
    /* �}�C�������νd�ҡG CheckIDNo.c �ˬd�����Ҹ� */


    system("PAUSE");	
    return 0;
}
