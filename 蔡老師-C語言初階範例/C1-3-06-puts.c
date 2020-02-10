/* puts--將指定的『字元陣列』，輸出到螢幕 */
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    char myname[30]= "mike"; 
    char myschool[30]= "巨匠電腦";
    
    puts("我的名字叫");  /* puts 印完後 會自動換行 */ 
    puts(myname);
    //TODO : 將上面這一行 , 改寫 為 printf()      
    
    
    printf("我在：");  /* printf 印完後 不會自動換行 */ 
    puts(myschool);
    puts("學C語言"); 
        
    system("pause"); 
    return 0;
}
