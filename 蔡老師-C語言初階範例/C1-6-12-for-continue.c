/* for-continue--�L�X�϶����Ҧ�3������ */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum,a,b,i;
    sum = 0; 
    
    printf("�п�J �_�l�ȻP�פ��(�Хγr���j�} , �p�G5,20)�G");
    scanf("%d , %d",&a,&b); 

    for(i=a ; i<=b ; i++)
    {      
        if(i%3 !=0){ //��i�Ȥ���3������(�l�� ���O 0 )        
           continue; //���L�U���� code�A���� for���� i++�A�A�P�_ i <= b  
        }
      
        sum = sum + i; 
        printf("%d , ",i); //�L�X��3�����Ƥ� i �� 
    }
    printf("\n\n�q%d �� %d ������ 3 �����ƩM = %d\n",a,b,sum);  
    
    system("pause");  
    return 0;
}
