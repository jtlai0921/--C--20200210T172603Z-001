/* ���W(��) �B��l ++  --  */
#include <stdio.h>
#include <stdlib.h> 

int main(void)
{ 
    
    int pay , bonus ;
    /* �e�m�� ���W�B��l */
    pay=100 , bonus = 200 ;
    printf("1> ����e�Gpay=%d , bonus=%d \n",pay,bonus);  
    
	pay = ++bonus; //bonus�|���[ 1��A�A���w�� pay�A���� ����U���o��� 
	//bonus = bonus + 1;
	//pay = bonus;
    
	printf("   pay = ++bonus;\n");
    printf("   pay   = %d \n"  ,pay);
    printf("   bonus = %d \n\n",bonus);    

    /* ��m�� ���W�B��l */
    pay=100 , bonus = 200 ;
    printf("2> ����e�Gpay=%d , bonus=%d \n",pay,bonus);    
    
	pay = bonus++; //bonus�|�����w�� pay��A�A�[ 1�A���� ����U���o��� 
	//pay = bonus;
	//bonus = bonus + 1;
   	
	printf("   pay = bonus++;\n");
    printf("   pay   = %d \n",pay);
    printf("   bonus = %d \n",bonus);    
    printf("\n=====================================\n");        
    
    /* ��m�� ���W�B��l */    
    int a=0,b=1,c=0;   
    printf("3> ����e�Ga=%d , b=%d , c=%d \n",a,b,c);
    
    c=a++ + b; //���B�zc=a��b;�A�M��A�B�za++;
    /*����U���o���  
    c=a + b;
    a = a + 1;   */       
    printf("   c=a++ + b ==>  a=%d , c=%d\n\n",a,c);     
        
        
    /* �e�m�� ���W�B��l */
    int x=0,y=1,z=0;
    printf("4> ����e�Gx=%d , y=%d , z=%d \n",x,y,z);    
    z=++x + y; //���B�z++x;�A�M��A�B�zz=x��y;
    /*����U���o���  
    x = x + 1;
    z = x + y;  */            
    printf("   z=++x + y ==>  x=%d , z=%d\n\n",x,z);
    
	  
    /* ��m�� ����B��l */ 
    int e=0,f=1,g=0;
    printf("5> ����e�Ge=%d , f=%d , g=%d \n",e,f,g);    
    g=e-- + f; //���B�zg=e��f;�A�M��A�B�ze--  */
    printf("   g=e-- + f ==>  e=%d , g=%d\n\n",e,g); 
    
    
    /* �e�m�� ����B��l */ 
    int p=0,q=1,r=0;
    printf("6> ����e�Gp=%d , q=%d , r=%d \n",p,q,r);    
    r=--p + q; //���B�z--p;�A�M��A�B�zr=p��q */
    printf("   r=--p + q ==>  p=%d , r=%d\n\n",p,r);
    
    system("PAUSE");	
    return 0;
}
