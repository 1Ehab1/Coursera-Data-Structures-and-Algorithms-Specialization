#include<stdio.h>
int get_fibonacci_last_digit_naive(int n);
int main(void)
{
    int n = 0;
    scanf("%d",&n);
    if((n<=10000000) && (n>=0))
    {
        int x = get_fibonacci_last_digit_naive(n);
        printf("%d\n",x);
    }
    return 0;
}
int get_fibonacci_last_digit_naive(int n)
{
    char arr[n];
    arr[0] = 0;
    arr[1] = 1;
    if(n<=1)
    {
        return n;
    }
    for(int i = 2 ; i <= n ; i++)
    {
        arr[i] =(arr[i - 1] + arr[i - 2]) % 10;
    }
    return arr[n];
}
