//8、两个递增有序表合并成一个递增有序表


# include <stdio.h>
# include <stdlib.h>
# include "SqList.cpp"


bool merge(SqList L1,SqList L2,SqList &L3)
{
    int k = 0,i = 0,j = 0;
    while (i < L1.length && j < L2.length)
    {
        if (L1.data[i]<L2.data[j])
        {
            L3.data[k++] = L1.data[i++]; 
        }
        else
        {
            L3.data[k++] = L2.data[j++];
        }
    }
    while (i<L1.length)
        L3.data[k++]=L1.data[i++];
    while (j<L2.length)
        L3.data[k++]=L2.data[j++];
    
    // for(;i<L1.length;++i)
    // {
    //     L3.data[k++] = L1.data[i];
    // }
    // for(;j<L2.length;++j)
    // {
    //     L3.data[k++] = L1.data[j];
    // }
    L3.length = k;

    return true;
}


int main()
{
    SqList A = {{2, 5, 9, 13, 19}, 5};
    SqList B = {{1, 6, 7, 10}, 4};
    SqList C;
    merge(A,B,C);
    for (int i = 0;i<C.length;++i)
    {
        printf("%d ",C.data[i]);
    }
    printf("\n");
}