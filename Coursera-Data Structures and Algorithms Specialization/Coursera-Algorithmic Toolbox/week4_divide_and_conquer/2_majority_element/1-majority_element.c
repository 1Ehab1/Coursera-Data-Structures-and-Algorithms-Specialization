#include<stdio.h>
#include <stdlib.h>
int get_majority_element(int arr[], int left, int right , int size);
int cmpfunc (const void * a, const void * b);
int main(void)
{
    int n,a,index = 0;
    scanf("%d" , &n);
    if(n <= 100000 && n >= 1)
    {
        int arrn[n];
        for(int i = 0 ; i < n ; i++)
        {
            scanf("%d",&a);
            if(a <= 1000000000 && a >= 0)
            {
                arrn[i] = a;
            }
        }
        qsort(arrn, n, sizeof(int), cmpfunc);
        index = get_majority_element(arrn, 0, n , n);
        printf("%d",index);
    }
}
int get_majority_element(int arr[], int left, int right , int size)
{
    int count = 0;
    int mid = (left + right) / 2;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[mid])
        {
            count++;
        }
    }
    if (count > mid)
    {
        return 1;
    }
    return 0;
}
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
