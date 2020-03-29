#include<stdio.h>
int main(void)
{
    int nitems= 0,cap = 0,value= 0,weight= 0,y = 0,j = 0,z = 0 ,w = 0, n = 0;
    double max_value = 0 , d =0 , max_weight = 0 , dd= 0 , yy = 0;
    scanf("%d%d",&nitems,&cap);
    if(nitems >=1 && nitems <= 1000 && cap >= 0 && cap <= (2*1000000))
    {
        int arrv[nitems];
        int arrv2[nitems];
        int arrw[nitems];
        int arrw2[nitems];
        double arrvw[nitems];
        double arrd[nitems];
        for (int i = 0 ; i < nitems ; i++)
        {
            scanf("%d%d",&value,&weight);
            if(value >= 0 && value <=(2*1000000) && weight >=0 && weight <=(2*1000000))
            {
                arrv2[i] = arrv[i] = value;
                dd = (double)arrv[i];
                arrw2[i] = arrw[i] = weight;
                yy = (double)arrw[i];
                arrd[i] = arrvw[i] = dd/yy;
            }
        }
        if(nitems != 1)
        {
            for(int x = 0 ; x < nitems ; x++)
            {
                for(y = 0 ; y < (nitems-1) ; y++)
                {
                    if(arrvw[y] < arrvw[y+1])
                    {
                        arrd[y] = arrvw[y+1];
                        arrvw[y+1] = arrvw[y];
                        arrvw[y] = arrd[y];
                        arrd[y+1] = arrvw[y+1];

                        arrv2[y] = arrv[y+1];
                        arrv[y+1] = arrv[y];
                        arrv[y] = arrv2[y];
                        arrv2[y+1] = arrv[y+1];

                        arrw2[y] = arrw[y+1];
                        arrw[y+1] = arrw[y];
                        arrw[y] = arrw2[y];
                        arrw2[y+1] = arrw[y+1];
                    }
                }
            }
        }
        while(max_weight < cap && w <nitems)
        {
            n = 0;
            while(n < arrw2[w] && max_weight < cap)
            {
                max_value = max_value + arrd[w];
                max_weight++;
                n++;
            }
            w++;
        }
    printf("%.4lf",max_value);
    printf("\n");


    for(int i = 0 ; i < nitems ; i++)
    {
    printf("%d ",arrv[i]);
    }
    printf("\n");
    for(int i = 0 ; i < nitems ; i++)
    {
        printf("%d ",arrv2[i]);
    }
    printf("\n");
    for(int i = 0 ; i < nitems ; i++)
    {
        printf("%d ",arrw[i]);
    }
    printf("\n");
    for(int i = 0 ; i < nitems ; i++)
    {
        printf("%d ",arrw2[i]);
    }
    printf("\n");
        for(int i = 0 ; i < nitems ; i++)
    {
        printf("%.4lf ",arrvw[i]);
    }
    printf("\n");
        for(int i = 0 ; i < nitems ; i++)
    {
        printf("%.4lf ",arrd[i]);
    }
    }
}
