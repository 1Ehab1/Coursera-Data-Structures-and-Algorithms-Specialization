#include<stdio.h>
void quicksort(int number[],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}

int main()
{
    int n,a;
    int majority = 0;
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
        quicksort(arrn,0,n-1);
        for(int i=0;i<n;i++)
        printf("%d ",arrn[i]);
    }
   return 0;
}
