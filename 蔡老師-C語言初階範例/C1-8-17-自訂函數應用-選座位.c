/* 自訂函數-選座位與 while-for-if的應用 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // toupper()
#include <conio.h>  // getch()

#define NO  0
#define YES 1

//宣告3個函數原型，函數定義在 main()下面 
void inputSeat(); //輸入 座位  
void showSeat();  //顯示 座位表 
int isContinue(); //判斷 是否繼續輸入 

//宣告3個全域變數 
int seat[10][10]={0};  //陣列,共100個座位 seat[0][0]～ seat[9][9] 
char row; //選第幾排(橫列)
int  no;  //選第幾個位子(縱欄) 

int main() //main主函數 
{
    do
    {
        system("cls");    //清除畫面  
        inputSeat();      //1>輸入 座位 
        showSeat();       //2>顯示 座位表 
    }while(isContinue()); //3>判斷 是否繼續輸入 
}

//1>輸入座位 
void inputSeat()
{
    while(1)
    {
        //先輸入座位  
        fflush(stdin); /* 清除鍵盤緩衝區，stdin 代表輸入設備,即鍵盤 */
        printf("請輸入第幾排 (A~J) : ");
        scanf("%c",&row);
        printf("請輸入第幾號 (1~10) : ");
        scanf("%d",&no);

        row = toupper(row); //選第幾排(列)，轉為大寫字母 
        
        /* 檢查 座位是否輸入正確 */
        if (row < 'A' || row > 'J' || no < 1 || no > 10) //輸入A-J排，1-10位子 
        {
            printf("請輸入第幾排(A~J)，第幾號(1~10)，請按任一鍵重輸! \n\n");
            getch(); // 等待按鍵,不顯示按鍵值 , 鍵值存入 鍵盤緩衝區    
            system("CLS");
            continue;                
        }        
        
        //輸入正確 , 判斷座位 是否被選走了  
        printf("\n你選擇的座位是 : %c%d \n\n",row,no);
        if(seat[row-'A'][no-1]==1) //若row 為A , A-A 為0，A的Ascii code 為65  
        {
            printf("座位已經被選走了，請按任一鍵繼續! \n\n");
            getch(); // 等待按鍵，不顯示按鍵值，鍵值存入 鍵盤緩衝區  
            continue;
        }
        else
        {
            seat[row-'A'][no-1] = 1; // 設定 1 表示該座位被你選到了  
            break;
        }
    }
}

//2>顯示座位表  
void showSeat()
{   
    char row ; //列   
    int  col;  //欄  
   
    //印出 欄標題 1-10 
    printf("   ");
    for(col = 1 ; col <=10 ; col++)
    {
        printf("%d  ",col);
    }
    printf("\n");

    // 列出 A ~ J 排(10橫列) 
    for(row = 'A' ; row <= 'J' ; row++)
    {
        printf("%c  ",row);

        // 輸出一排 10 個座位 
        for(col = 1 ; col <= 10 ; col++)
        {
            // 判斷目前顯示的座位, 是否被選了  
            if(seat[row-'A'][col-1] == 1)
                printf("x  ");  //被選了  
            else
                printf("o  ");  //還沒被選走  
        }
        printf("\n"); // 換行  
    }
}

//3>判斷是否繼續輸入，回傳int  
int isContinue()
{
    char more;
    printf("\n是否繼續( Y or N ) ? ");
    fflush(stdin); // 清除鍵盤緩衝區 
    more = toupper(getchar()) ; //此處不使用getch()，使用getchar，等待按[Enter]，可更改  
    
    if(more == 'Y')
       return YES; //要 繼續輸入 
    else
       return NO;  //不要 繼續輸入 
}
