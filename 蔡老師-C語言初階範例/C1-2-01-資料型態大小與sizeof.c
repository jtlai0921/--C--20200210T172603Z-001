/* ��ƫ��A�j�p�P sizeof�B��l */ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* sizeof�B��l , �i�p��{���� , �ܼƩҦ��Ϊ��O����j�p */  
    
    //��� ���U�ث��A ���Ϊ��O����j�p�G  
    printf("\n 1>���int�G%d bytes"   , sizeof(int) );
    printf("\n 2>unsigned�G%d bytes"  , sizeof(unsigned int) );
    printf("\n 3>short int�G%d bytes" , sizeof(short int) );
    printf("\n 4>unsigned short int�G%d bytes \n" , sizeof(unsigned short int) );
    
    //�B�I�� ���U�ث��A ���Ϊ��O����j�p�G  
    printf("\n 5>float�G%d bytes"     , sizeof(float)  );
    printf("\n 6>double�G%d bytes \n" , sizeof(double) );
    
    //�r�� ��ƫ��A ���Ϊ��O����j�p�G
    printf("\n 7>�r��char�G%d bytes \n" , sizeof(char) );
   
    //�r���}�C ���Ϊ��O����j�p�G
    char a[20]="**�r���}�C**";   // �C�@����r , �ϥΨ�r��(bytes) 
    printf("\n 8>�r���}�Ca[20]�s�񤺮e�G %s �G%d bytes \n" , a , sizeof(a) );    
    
    //�ŧi����ܼ�  
    int b;
    printf("\n 9>�ŧi����ܼ� b ���G%d bytes \n\n" , sizeof(b) );
    
    system("pause");
    return 0;
}
