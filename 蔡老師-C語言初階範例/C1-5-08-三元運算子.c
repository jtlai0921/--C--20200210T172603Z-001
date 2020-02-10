/* 三元運算子 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{    
    int a;
    printf("請輸入要判斷 奇數或偶數 的數字 ? ");
    scanf("%d",&a);    

    // 1>單一運算式 
    a%2 ? printf("%d is 奇數",a) : printf("%d is 偶數",a) ;  
    //TODO : 將上面這一行 , 改寫 為 if else  


    printf("\n\n");  
    // 2>運算式中 再包含運算式 
    float discount , pay;
    int total; 
    printf("請輸入購買金額：");
    scanf("%d", &total);
    discount=( total > 50000 ? 0.8 : ( total >= 10000 ? 0.9 : 1) );
    //TODO : 將上面這一行 , 改寫為 if else if... else      


    pay = (float)total*discount ;
    printf("金額是 %d 乘 %.2f = 應付金額$ %.1f \n" ,total , discount , pay );
    
    //也可以如下寫法 , 直接將計算式 , 放進 printf 
    //printf("金額是 %d 乘 %.2f = 應付金額$ %.1f\n",total,discount, (float) total*discount);     
    system("pause"); 

    // 3>使用 &&邏輯運算子 判斷 
    system("cls");  //清除畫面 
	int age;
	printf("\n=== 電影購票 ===\n");
	printf("請輸入您的年齡：");
	scanf("%d", &age);
	printf("您購買票別 %s \n", age>=60? "優待票": (age>=0 && age<=12 ? "兒童票" : "成人票"));	
    //TODO : 將上面這一行 , 改寫為 if else if... else    


	printf("\n\n");
    system("pause"); 
    return 0;
}
