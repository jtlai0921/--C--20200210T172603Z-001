/* for-for-break���X���j��--�E�E���k�� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mOutCnt , mInCnt;  /* �~�j�� , ���j�� �� ������ */
    int mOut , mIn;        /* �~�j�� , ���j�� �� �p�ƾ� */

    printf("��J�E�E���k���C��(�~�j��)�P�C��C(���j��)��������(��ȶ��Ъť�):"); 
    scanf("%d %d",&mOutCnt , &mInCnt);
    printf("\n");
    
    if (mOutCnt >= 1 && mOutCnt <= 9 && mInCnt >= 1 && mInCnt <= 9)
    {
        for(mOut=1 ; mOut<=mOutCnt ; mOut++) /* �~�j��A�N �Q���� �C�����W 1 */
        { 
            for(mIn=1 ; mIn<10 ; mIn++)      /* ���j��A�N ���� �C�����W 1 */
            {
                printf("%2d*%2d=%2d",mOut,mIn,mOut*mIn);  /* �p��æL�X99���k���� */
                if(mIn >= mInCnt)                                 
                   break;  /* ���X ���j�鵲�c */
            }
            printf("\n");  /*���j��]���A�L�@�C�ᴫ�� */
        }            
    }
    else
    {
       printf("�бz��J�G1-9���Ʀr\n");     
    }

    system("pause"); 
    return 0;
}
