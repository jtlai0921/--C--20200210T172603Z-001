/* printf�U�ظ�� �P �]�w���e�� */
#include <stdio.h>
#include <stdlib.h>

int main(){
    //�ŧi�ܼơG 
    char name[20]= "mike";   //�r���}�C  
    int age=28;              //��� 
    char level='A';          //�r�� 
     
    float height=168.58;     //���B�I��     
    double money=12345.1234; //����B�I�� 

    printf("�ڪ��W�r�s�G%s\n", name);  //����L�X��r 
    printf("���~�G%d��\n",age);
    printf("���Z�O�G%c\n\n", level);         

    printf("1>***�S���ϥ�printf�]�w���e�סG\n"); 
    printf("1-1>�s�x��%d����\n",12); 
    printf("1-2>�s�x��%d����\n",1234); 
    printf("1-3>�s�x��%d����\n",123456); 
    printf("1-4>�s�x��%d����\n",12345678);             
    printf("\n");
     
    printf("2>***�ϥ�printf�]�w���e�סG\n");    
    printf("2-1>��6�Ӧ�m�L�X12,�h�l����m��b����B��ťաG%6d����\n",12);     
    printf("2-2>�s�x��%6d����\n",12); 
    printf("2-3>�s�x��%6d����\n",1234); 
    printf("2-4>�s�x��%6d����\n",123456); 
    printf("2-5>�s�x��%6d����\n",12345678);             
    printf("**��Ʀr�W�L���w���e���٬O�|��ܧ��㪺�Ʀr , ���O�W�U��Ʀr�N�S���\n");
    printf("\n");
       
    printf("3>��6�Ӧ�m�L�X12,�h�l����m��b�k��B��ťաG%-6d����\n",12);     
    printf("3-1>�s�x��%-6d����\n",12); 
    printf("3-2>�s�x��%-6d����\n",1234); 
    printf("3-3>�s�x��%-6d����\n",123456); 
    printf("3-4>�s�x��%-6d����\n",12345678);             
    printf("\n");

    printf("4>��6�Ӧ�m�L�X12,�h�l����m��b����B��0�G%06d����\n",12);
    printf("4-1>�s�x��%06d����\n",12); 
    printf("4-2>�s�x��%06d����\n",1234); 
    printf("4-3>�s�x��%06d����\n",123456); 
    printf("4-4>�s�x��%06d����\n",12345678);    

    printf("\n");        
    printf("5-1>��-�P0�@�_�ϥήɡA0���@�η|���ġG%-06d����\n",12);    
    printf("5-2>���t�����@�Ӧ�m�G%+5d����\n\n",12);
 
    //��5�Ӧ�m�]3���ơ�1��p���I+1��p�ơ^�A�L�Xheight���ȡA�p���I���2��A���|�ˤ��J 
    printf("6-1>����%5.1f����\n", height);   
    printf("6-2>�Ȧ�s�ڦ�%lf��\n\n", money); 
    
    printf("**�W�L ���w�� �p�Ʀ�� , �|�|�ˤ��J\n");
    printf("7-1>�Ʀr�G%6.2lf.-\n" , 123.4);
    printf("7-2>�Ʀr�G%6.2lf.-\n" , 1234.5);
    printf("7-3>�Ʀr�G%6.2lf.-\n" , 123456.789);
                
    system("pause"); 
    return 0;
}
