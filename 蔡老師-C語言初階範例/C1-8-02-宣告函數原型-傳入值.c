/* �ŧi��ƭ쫬-�ǤJ�� */
#include <stdio.h>
#include <stdlib.h>

int f(int,int); //�ŧi��ƭ쫬 

int main(void)
{
    int x,n;
    printf("�p��x��n����A�п�Jx�Pn (��Ʀr�Ъ�1��, �p 3 5):");    
    scanf("%d %d",&x,&n); 
    
    //�i�����N�I�s��� f , �g�bprintf�� : �p�⦸�� �A��� 
    printf("%d^%d = %d \n" , x , n , f(x,n) ); 
    
    system("pause");     
    return 0;
}


//��ƥD��{�� 
int f(int x,int n)
{
    if(n==0) //�Y����Ȭ� 0  
       return 1;
    else
    {     
       int i , result = 1;        
       for(i=1 ; i<=n ; i++){ //�s�� �򩳼Ʀr , �p3��5���� = 3*3*3*3*3 
           result = result * x;  // x�O �򩳼Ʀr 
       }    
      
       return result; //�Ǧ^�p�⵲�G, ���椣�i�ٲ�, �B�Ǧ^�ȥ����� int 
    }        
}
