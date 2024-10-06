//7.从 有序表 中删除所有值重复的元素


# include <stdio.h>
# include <stdlib.h>
# include "SqList.cpp"


bool Del(SqList &L)
{
    int j = 0;
    for (int i = 1; i<L.length; ++i)
    {
        if(L.data[j] != L.data[i])
        {
            L.data[++j] = L.data[i];
        }
    }
    L.length = j;
    return true;
}


int main()
{
    SqList L = {{12, 13, 13, 13, 19}, 5};
    Del(L);
    for (int i = 0;i<L.length;++i)
    {
        printf("%d ",L.data[i]);
    }
    printf("\n");
}