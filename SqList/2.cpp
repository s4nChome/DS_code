//用顺序表最后一个元素覆盖整个顺序表中最小元素，并返回该最小元素


# include <stdio.h>
# include <stdlib.h>
# include "SqList.cpp"

int Del_Min(SqList &L)
{
    int min = L.data[0];
    int pos;
    for (int i = 1; i < L.length; ++i)
    {
        if (L.data[i] < min)
        {
            min = L.data[i];
            pos = i;
        }
    }
    L.data[pos] = L.data[L.length -1];
    --L.length;
    return min;
}

int main() {
    SqList L = {{12, 3, 5, 8, 9}, 5};
    int min = Del_Min(L);

    // 打印顺序表
    printf("Updated List: ");
    for (int j = 0; j < L.length; ++j) {
        printf("%d ", L.data[j]);
    }
    printf("\n");

    // 打印最小元素
    printf("The minimum element is: %d\n", min);

    return 0;
}