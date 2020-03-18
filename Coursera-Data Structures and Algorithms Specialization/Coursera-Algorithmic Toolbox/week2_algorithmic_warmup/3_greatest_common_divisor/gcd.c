#include<stdio.h>
int GCD(int x,int y);
int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a >=1 && b >=1 && a<=(2*1000000000) && b<=(2*1000000000))
    {
        printf("%d",GCD(a,b));
    }
    return 0;
}
int GCD(int x,int y)
{
    int gcd = 1;
    while(gcd != 0)
    {
        gcd = x % y;
        x = y;
        y = gcd;
    }
    return x;
}
