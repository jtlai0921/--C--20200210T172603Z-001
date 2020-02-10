/* printf各種資料 與 設定欄位寬度 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    //宣告變數： 
    char name[20]= "mike";   //字元陣列  
    int age=28;              //整數 
    char level='A';          //字元 
     
    float height=168.58;     //單精浮點數     
    double money=12345.1234; //倍精浮點數 

    printf("我的名字叫：%s\n", name);  //此行印出文字 
    printf("今年：%d歲\n",age);
    printf("成績是：%c\n\n", level);         

    printf("1>***沒有使用printf設定欄位寬度：\n"); 
    printf("1-1>新台幣%d元整\n",12); 
    printf("1-2>新台幣%d元整\n",1234); 
    printf("1-3>新台幣%d元整\n",123456); 
    printf("1-4>新台幣%d元整\n",12345678);             
    printf("\n");
     
    printf("2>***使用printf設定欄位寬度：\n");    
    printf("2-1>給6個位置印出12,多餘的位置放在左邊且填空白：%6d結尾\n",12);     
    printf("2-2>新台幣%6d元整\n",12); 
    printf("2-3>新台幣%6d元整\n",1234); 
    printf("2-4>新台幣%6d元整\n",123456); 
    printf("2-5>新台幣%6d元整\n",12345678);             
    printf("**當數字超過指定的寬度還是會顯示完整的數字 , 但是上下行數字就沒對齊\n");
    printf("\n");
       
    printf("3>給6個位置印出12,多餘的位置放在右邊且填空白：%-6d結尾\n",12);     
    printf("3-1>新台幣%-6d元整\n",12); 
    printf("3-2>新台幣%-6d元整\n",1234); 
    printf("3-3>新台幣%-6d元整\n",123456); 
    printf("3-4>新台幣%-6d元整\n",12345678);             
    printf("\n");

    printf("4>給6個位置印出12,多餘的位置放在左邊且補0：%06d結尾\n",12);
    printf("4-1>新台幣%06d元整\n",12); 
    printf("4-2>新台幣%06d元整\n",1234); 
    printf("4-3>新台幣%06d元整\n",123456); 
    printf("4-4>新台幣%06d元整\n",12345678);    

    printf("\n");        
    printf("5-1>當-與0一起使用時，0的作用會失效：%-06d結尾\n",12);    
    printf("5-2>正負號佔一個位置：%+5d結尾\n\n",12);
 
    //給5個位置（3位整數＋1位小數點+1位小數），印出height的值，小數點後第2位，做四捨五入 
    printf("6-1>身高%5.1f公分\n", height);   
    printf("6-2>銀行存款有%lf元\n\n", money); 
    
    printf("**超過 指定的 小數位數 , 會四捨五入\n");
    printf("7-1>數字：%6.2lf.-\n" , 123.4);
    printf("7-2>數字：%6.2lf.-\n" , 1234.5);
    printf("7-3>數字：%6.2lf.-\n" , 123456.789);
                
    system("pause"); 
    return 0;
}
