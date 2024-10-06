//4、将(a1,a2,a3……am,b1,b2,……bn)转换成(b1,b2,…bn,a1,a2,a3,……am)


# include <stdio.h>
# include <stdlib.h>
# include "SqList.cpp"

void reverse(SqList &L,int start,int end)
{
    for (int i = start,j = 0; i <= (start + end)/2; ++i,++j)
    {
        int temp = L.data[i];
        L.data[i] = L.data[end-j];
        L.data[end-j] = temp;
    }
}



int main()
{
    SqList L = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},10};
    reverse(L,0,4);
    reverse(L,5,9);
    reverse(L,0,9);
    for (int i = 0;i<L.length;++i)
    {
        printf("%d ",L.data[i]);
    }
}