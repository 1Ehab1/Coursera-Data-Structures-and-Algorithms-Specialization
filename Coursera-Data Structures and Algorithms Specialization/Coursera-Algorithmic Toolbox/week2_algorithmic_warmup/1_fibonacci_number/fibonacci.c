#include<stdio.h>
unsigned int fibonacci_naive(unsigned int n);
int main(void)
{
    unsigned int n = 0;
    scanf("%lu",&n);
    if((n<=45) && (n>=0))
    {
        unsigned int x = fibonacci_naive(n);
        printf("%lu\n",x);
    }
    return 0;
}
unsigned int fibonacci_naive(unsigned int n)
{
    if (n <= 1)
    {
        return n;
    }
    unsigned int x = (fibonacci_naive(n - 1) + fibonacci_naive(n - 2));
    return x;
}
