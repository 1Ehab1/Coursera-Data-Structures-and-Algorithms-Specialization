#include<stdio.h>
int main(void)
{
    int d,m,n,ni,imp = -1,ref,last,cur;
    scanf("%d%d%d",&d,&m,&n);
    if( d >= 1 && d <= 100000 && m >= 1 && m <= 400 && n >= 1 && n <= 300)
    {
        int arrni[n+2];
        arrni[0]=0;
        arrni[n+1] = d;
        for(int i = 1 ; i < (n+1) ; i++)
        {
            scanf("%d",&ni);
            if(ni > 0 && ni < d)
            {
                arrni[i] = ni;
            }
        }
/*        for(int i = 0 ; i < (n+2) ; i++)
        {
            printf("%d ",arrni[i]);
        }
        printf("\n");*/
        cur = 0;
        ref = 0;
        while(cur <= n)
        {
            last = cur;
            while(cur <= n && (arrni[cur + 1] - arrni[last]) <= m)
            {
                cur++;
            }
            if(cur == last)
            {
                printf("%d",imp);
                return 0;
            }
            if(cur <= n)
            {
                ref = ref +1;
            }
        }
        printf("%d",ref);
    }
}
