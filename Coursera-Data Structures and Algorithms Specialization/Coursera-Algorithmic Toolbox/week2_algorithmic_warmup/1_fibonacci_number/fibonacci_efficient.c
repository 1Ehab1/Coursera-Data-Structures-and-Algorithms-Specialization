#include<stdio.h>
int fibonacci_efficient(int n);
int main(void)
{
    int n = 0;
    scanf("%d",&n);
    if((n<=45) && (n>=0))
    {
        int x = fibonacci_efficient(n);
        printf("%d\n",x);
    }
    return 0;
}
int fibonacci_efficient(int n)
{
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    if(n<=1)
    {
        return n;
    }
    for(int i = 2 ; i <= n ; i++)
    {
        arr[i] =(arr[i - 1] + arr[i - 2]);
    }
    return arr[n];
}
