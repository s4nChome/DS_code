//5、删除顺序表中所有值为x的元素(两种方法)


# include <stdio.h>
# include <stdlib.h>
# include "SqList.cpp"

//将不等于x的元素放到顺序表中
void Del(SqList &L,int x)
{
    int j = 0;
    for (int i = 0; i<L.length; ++i)
    {
        if (L.data[i] != x){
            L.data[j] = L.data[i];
            ++j;
        }
    }
    L.length = j;
}

//将等于x的元素从顺序表中删除
void del(SqList &L,int x)
{
    int j = 0;
    for (int i = 0; i<L.length; ++i)
    {
        if(L.data[i] == x)
        {
            ++j;
        }
        else
        {
            L.data[i-j]=L.data[i];
        }
    }
    L.length = L.length - j;
}


int main()
{
    SqList L = {{12, 3, 5, 8, 9, 3}, 6};
    // Del(L,3);
    del(L,3);
    for (int i = 0;i<L.length;++i)
    {
        printf("%d ",L.data[i]);
    }
    printf("\n");
}