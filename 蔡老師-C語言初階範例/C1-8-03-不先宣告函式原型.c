/* �ŧi��ƭ쫬-��ƥD��{�� �g�bmain()�W�� */ 
#include <stdio.h>
#include <stdlib.h>

//�����N ��ƥD��{�� �g�bmain()�W���A�N���� �ŧi��ƭ쫬 
//int f(int,int); //�ŧi��ƭ쫬�A���椣�g 

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
      
       return result;  //�Ǧ^�p�⵲�G, ���椣�i�ٲ�, �B�Ǧ^�ȥ����� int 
    }        
}


int main(void)
{
    int x,n;
    printf("�p��x��n����A�п�Jx�Pn (��Ʀr�Ъ�1��, �p 3 5):");    
    scanf("%d %d",&x,&n); 
    
    //�I�s f ��ơA�p�⦸�� �A��� 
    printf("%d^%d = %d\n",x,n,f(x,n));  //�i�����N�I�s��ơA�g�bprintf�� 
    
    system("pause");     
    return 0;
}
