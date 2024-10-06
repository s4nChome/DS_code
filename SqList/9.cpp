//9.求两个递增序列合并后的中位数


# include <stdio.h>
# include <stdlib.h>
# include "SqList.cpp"

int findMid(SqList L1,SqList L2)
{
    SqList L3;
    int i,j,k;
    i = j = k = 0;
    while(i < L1.length && j < L2.length)
    {
        if(L1.data[i]<L2.data[j])
        {
            L3.data[k++]=L1.data[i++];
        }
        else
        {
            L3.data[k++]=L2.data[j++];
        }
    }

    while(i<L1.length)
        L3.data[k++]=L1.data[i++];
    while(j<L2.length)
        L3.data[k++]=L2.data[j++];
    L3.length = k;

    return L3.data[k/2 - 1];
}

int main()
{
    SqList L1 = {{11, 13, 15, 17, 19}, 5};
    SqList L2 = {{2, 4, 6, 8, 20}, 5};
    printf("%d",findMid(L1,L2));
    printf("\n");
}