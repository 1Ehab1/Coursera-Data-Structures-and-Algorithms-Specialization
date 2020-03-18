#include<stdio.h>
unsigned long long max_pairwise(unsigned long *arr , unsigned long size);
int main(void)
{
    unsigned long n;
    unsigned long long result = 0;
    scanf("%lu",&n);
    if((n>=2) && (n<=200000))
    {
        unsigned long arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            scanf("%lu",&arr[i]);
        }
        result = max_pairwise(arr , n);
        printf("%llu",result);
    }
    return 0;
}
unsigned long long max_pairwise(unsigned long *arr , unsigned long size)
{
    unsigned long long result = 0;
    long max1 = -1;
    long max2 = -1;
    for(long i = 0 ; i < size ; i++)
    {
        if((max1 == -1) || (arr[i] > arr[max1]))
        {
            max1 = i;
        }
    }
        for(long i = 0 ; i < size ; i++)
    {
        if((i != max1) && ((max2 == -1) || (arr[i] > arr[max2])))
        {
            max2 = i;
        }
    }
    result = arr[max1] * arr[max2];
    return result;
}
