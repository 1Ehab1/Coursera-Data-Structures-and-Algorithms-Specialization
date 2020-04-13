#include<stdio.h>
int binarySearch(int arrn[] , int low , int high , int key);
int main(void)
{
    int n,a,k,b,index = 0;
    scanf("%d" , &n);
    if(n <= (3*10000) && n >= 1)
    {
        int arrn[n];
        for(int i = 0 ; i < n ; i++)
        {
            scanf("%d",&a);
            if(a <= 1000000000 && a >= 1)
            {
                arrn[i] = a;
            }
        }

    scanf("%d" , &k);
    if(k <= 100000 && k >= 1)
    {
        int arrk[k];
        for(int i = 0 ; i < k ; i++)
        {
            scanf("%d",&b);
            if(b <= 1000000000 && b >= 1)
            {
                arrk[i] = b;
            }
        }

    for(int i = 0 ; i < k ; i++)
    {
        index = binarySearch(arrn , 0 , n , arrk[i]);
        printf("%d " , index);
    }
    }
    }

}
int binarySearch(int arrn[] , int low , int high , int key)
{
    int mid = 0;
    while(high >= low)
    {
        mid = low + ((high - low)/2) ;
        if(arrn[mid] == key)
        {
            return mid;
        }
        else if(arrn[mid] > key)
        {
            high = mid - 1;
        }
        else if(arrn[mid] < key)
        {
            low = mid + 1;
        }
    }
    return -1;
}
