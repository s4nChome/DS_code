//10、设计一个时间上尽可能高效的算法，找出数组中未出现的最小正整数


# include <stdio.h>
# include <stdlib.h>

int find(int A[],int length)
{
    int i;
    int *arr = (int *)calloc(length+1,sizeof(int));
    for (int j = 0;j < length;++j)
    {
        if (A[j]>0&&A[j] < length+1)
        {
            arr[A[j]]=1;
        }
    }
    for (i = 1;i < length + 1;++i)
    {
        if(arr[i]==0)
            return i;
    }
    free(arr);
    return i;
}


int main()
{
  int A[6] = {1,2,3,4,5,7};
  printf("%d",find(A,6));
  printf("\n");
}