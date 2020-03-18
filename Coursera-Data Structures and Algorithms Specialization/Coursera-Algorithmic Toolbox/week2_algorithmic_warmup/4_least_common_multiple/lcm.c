#include<stdio.h>
unsigned long long GCD(unsigned long long x,unsigned long long y);
int main(void)
{
    unsigned long long a,b;
    scanf("%llu%llu",&a,&b);
    if(a >=1 && b >=1 && a<=(2*10000000) && b<=(2*10000000))
    {
        printf("%llu",(a*b/GCD(a,b)));//here
    }
    return 0;
}
unsigned long long GCD(unsigned long long x,unsigned long long y)
{
    unsigned long long gcd = 1;
    while(gcd != 0)
    {
        gcd = x % y;
        x = y;
        y = gcd;
    }
    return x;
}
