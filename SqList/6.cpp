//6、从顺序表中删除给定值在s到t之间(包含s和t)的所有元素


# include <stdio.h>
# include <stdlib.h>
# include "SqList.cpp"

void del(SqList &L,int min,int max)
{
    int j = 0;
    for (int i = 0; i<L.length; ++i)
    {
        if(L.data[i]<=max&&L.data[i]>=min)
        {
            ++j;
        }
        else
        {
            L.data[i-j] = L.data[i];
        }
    }
    L.length = L.length - j;
}


void Del(SqList &L,int min,int max)
{
    int j = 0;
    for (int i =0; i<L.length; ++i)
    {
        if(L.data[i] > max || L.data[i] < min)
        {
            L.data[j] = L.data[i];
            ++j;
        }
    }
    L.length = j;
}


int main()
{
    SqList L = {{12, 13, 15, 18, 9}, 5};
    //del(L, 13, 19);
    Del(L,13,19);
    for (int i = 0;i<L.length;++i)
    {
        printf("%d ",L.data[i]);
    }
    printf("\n");
}