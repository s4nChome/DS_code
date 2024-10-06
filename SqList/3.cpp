//将顺序表中的元素逆置


# include <stdio.h>
# include <stdlib.h>
# include "SqList.cpp"

void reverse(SqList &L)
{
    for(int i = 0; i < L.length/2; ++i)
    {
        int temp = L.data[i];
        L.data[i] = L.data[L.length-i-1];
        L.data[L.length-i-1] = temp;
    }

}

int main()
{
    SqList L =  {{12, 3, 5, 8, 9, 20}, 6};
    reverse(L);
    for (int j = 0; j < L.length; ++j) {
        printf("%d ", L.data[j]);
    }
    return 0;
}