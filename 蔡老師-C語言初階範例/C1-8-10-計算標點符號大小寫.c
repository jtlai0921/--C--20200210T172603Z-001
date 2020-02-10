/* 計算標點符號與大小寫的數量 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  //isascii, isdigit, isalpha, islower, isupper, ispunct, isspace 
#include <string.h> //strlen  

int main()
 {
    //宣告各變數 與 指定初值  
    //char string[100] = "巨匠GO168 @,sdd" ; //存放輸入的字串 , 或直接指定值  
    char string[100];  //存放輸入的字串  

    int length=0;
    int digit=0;
    int space=0;
    int menglish=0;
    int lowercase=0;
    int uppercase=0;
    int punctuation=0;
    int chinese=0; 
    int i=0; 
  
    printf("輸入字串(包含 中英文(大小寫),數字,標點符號,空白等):");
    gets(string); 
  
    //以迴圈取出後,判斷每一輸入字元 
    while(string[i] !='\0' ) 
    {               
        //ascii值>127:中文字（或全形文字）
        if(isascii(string[i])== 0) 
        { 
           chinese++;
           i++;   //中文字(或全形文字)為2bytes，要多移一個字元    
        } 
        
        else if(isdigit(string[i])!= 0) //數字   
           digit++;  
        
        else if(isalpha(string[i]) != 0) //英文字母     
        {       
           menglish++;  
           if(islower(string[i])!= 0) //小寫 
              lowercase++;
           else if(isupper(string[i])!= 0) //大寫 
              uppercase++;
        }
                    
        else if(ispunct(string[i])!= 0) //標點符號 
           punctuation++;
           
        else if(isspace(string[i])!= 0) //空白  
           space++;
            
        i++; //下移一個字元 
    }

    //顯示字元類別統計 
    printf("\n\n輸入字串：%s" , string);
    printf("\n\n總長度為：%d byte\n\n" , strlen(string));
  
    printf("1.中文字（或全形文字）有 %d個\n" , chinese);
    printf("2.阿拉伯數字有 %d個\n\n" ,digit);
    
    printf("3.英文字母有 %d個\n" ,menglish);    
    printf("4.小寫英文有 %d個\n" ,lowercase);
    printf("5.大寫英文有 %d個\n\n" ,uppercase);
    
    printf("6.標點符號有 %d個\n" ,punctuation);
    printf("7.空白字元有 %d個\n\n" ,space);
  
    system("PAUSE");
    return 0;
 }
