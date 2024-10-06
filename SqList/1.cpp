//顺序表递增有序，插入元素x，使得插入后的顺序表仍然有序

# include <stdio.h>
# include <stdlib.h>
# include "SqList.cpp"

int findElem(SqList L,int x)
{
    int i;
    for (i = 0; i < L.length; ++i)
    {
        if (L.data[i] > x)
        {
            return i;
        }
    }
    return i;
}

void insert (SqList &L,int x)
{
    int pos = findElem(L,x);
    for (int i = L.length-1; i >= pos; --i)
    {
        L.data[i+1]=L.data[i];
    }
    L.data[pos]=x;
    ++L.length;
}

int main()
{
    SqList L = {{1, 3, 5, 8, 9}, 5};
    insert(L, 39);
    // 打印顺序表
    for (int j = 0; j < L.length; ++j) {
        printf("%d ", L.data[j]);
    }
    printf("\n");

    return 0;
}

