/* �H������ 7�Ӥ��P�Ʀr���ֳz���X��� */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�����w�q�G
#define SIZE 42 //�ֳz �̤j�� (1-42) 
#define QTY 7   //�ֳz ���X�ƶq  

int main()
{
    int i;
    int seed = time(NULL); //�]�w�üƺؤl , NULL�����j�g 
    srand(seed);

    int lotto[SIZE];

    //�N 1~42�Ʀr, ��J�}�C lotto[0]�� lotto[41]
    for(i = 0 ; i < SIZE ; i++){
        lotto[i] = i+1;  //lotto[0]=1
    }

    int number; //�}�X�����X 
    int r;      //�ü� 
    int m;      //�}�C���޽s�� 0 ~ 41 
    
    printf("***���� %d �Ӽֳz���X�G\n\n",QTY);
    for(i = 0 ; i < QTY ; i++)
    {
        do
        {
            r = rand();
            m = r % SIZE;  //�M�w���ĴX�Ӯ�l(���޽s��) 
            number = lotto[m];
        }while(number==0); //���X�� 0 ��ܤw�g���X(����X���୫��)  

        printf("��X�����X %d �O�G%2d \n", i+1 , number );

        lotto[m] = 0; //���X�w�g���X�A�N�Ӱ}�C�����s�J 0   
    }

    printf("\n***ݢ�t�����t�d�I�I�I\n\n");
    system("pause");
    return 0;
}
