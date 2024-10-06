//11、若一个整数序列中有过半相同元素，则称其为主元素，设计算法找出数组A(a0,a1……an-1)的主元素。(其中0<ai<n)若存在主元素则输出，否则返回-1


# include <stdio.h>
# include <stdlib.h>
# include "SqList.cpp"

int find(int A[],int length)
{
    int *B = (int *)calloc(length+1,sizeof(int));
    for(int i = 0;i<length;++i)
    {
        B[A[i]]++;
    }
    int max = B[1];
    int pos = 1;
    for(int i =2;i < length+1; ++i)
    {
        if(B[i]>max)
        {
            max = B[i];
            pos = i;
        }
    }
    free(B);
    if(max > length/2)
        return pos;
    return -1;
}

int main()
{
    int A[8] = {3, 5, 5, 5, 5, 1, 5, 7};
    printf("%d",find(A,8));
    printf("\n");
}