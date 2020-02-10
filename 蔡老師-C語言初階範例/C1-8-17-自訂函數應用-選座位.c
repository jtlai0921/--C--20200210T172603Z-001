/* �ۭq���-��y��P while-for-if������ */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // toupper()
#include <conio.h>  // getch()

#define NO  0
#define YES 1

//�ŧi3�Ө�ƭ쫬�A��Ʃw�q�b main()�U�� 
void inputSeat(); //��J �y��  
void showSeat();  //��� �y��� 
int isContinue(); //�P�_ �O�_�~���J 

//�ŧi3�ӥ����ܼ� 
int seat[10][10]={0};  //�}�C,�@100�Ӯy�� seat[0][0]�� seat[9][9] 
char row; //��ĴX��(��C)
int  no;  //��ĴX�Ӧ�l(�a��) 

int main() //main�D��� 
{
    do
    {
        system("cls");    //�M���e��  
        inputSeat();      //1>��J �y�� 
        showSeat();       //2>��� �y��� 
    }while(isContinue()); //3>�P�_ �O�_�~���J 
}

//1>��J�y�� 
void inputSeat()
{
    while(1)
    {
        //����J�y��  
        fflush(stdin); /* �M����L�w�İϡAstdin �N���J�]��,�Y��L */
        printf("�п�J�ĴX�� (A~J) : ");
        scanf("%c",&row);
        printf("�п�J�ĴX�� (1~10) : ");
        scanf("%d",&no);

        row = toupper(row); //��ĴX��(�C)�A�ର�j�g�r�� 
        
        /* �ˬd �y��O�_��J���T */
        if (row < 'A' || row > 'J' || no < 1 || no > 10) //��JA-J�ơA1-10��l 
        {
            printf("�п�J�ĴX��(A~J)�A�ĴX��(1~10)�A�Ы����@�䭫��! \n\n");
            getch(); // ���ݫ���,����ܫ���� , ��Ȧs�J ��L�w�İ�    
            system("CLS");
            continue;                
        }        
        
        //��J���T , �P�_�y�� �O�_�Q�飼�F  
        printf("\n�A��ܪ��y��O : %c%d \n\n",row,no);
        if(seat[row-'A'][no-1]==1) //�Yrow ��A , A-A ��0�AA��Ascii code ��65  
        {
            printf("�y��w�g�Q�飼�F�A�Ы����@���~��! \n\n");
            getch(); // ���ݫ���A����ܫ���ȡA��Ȧs�J ��L�w�İ�  
            continue;
        }
        else
        {
            seat[row-'A'][no-1] = 1; // �]�w 1 ��ܸӮy��Q�A���F  
            break;
        }
    }
}

//2>��ܮy���  
void showSeat()
{   
    char row ; //�C   
    int  col;  //��  
   
    //�L�X ����D 1-10 
    printf("   ");
    for(col = 1 ; col <=10 ; col++)
    {
        printf("%d  ",col);
    }
    printf("\n");

    // �C�X A ~ J ��(10��C) 
    for(row = 'A' ; row <= 'J' ; row++)
    {
        printf("%c  ",row);

        // ��X�@�� 10 �Ӯy�� 
        for(col = 1 ; col <= 10 ; col++)
        {
            // �P�_�ثe��ܪ��y��, �O�_�Q��F  
            if(seat[row-'A'][col-1] == 1)
                printf("x  ");  //�Q��F  
            else
                printf("o  ");  //�٨S�Q�飼  
        }
        printf("\n"); // ����  
    }
}

//3>�P�_�O�_�~���J�A�^��int  
int isContinue()
{
    char more;
    printf("\n�O�_�~��( Y or N ) ? ");
    fflush(stdin); // �M����L�w�İ� 
    more = toupper(getchar()) ; //���B���ϥ�getch()�A�ϥ�getchar�A���ݫ�[Enter]�A�i���  
    
    if(more == 'Y')
       return YES; //�n �~���J 
    else
       return NO;  //���n �~���J 
}
