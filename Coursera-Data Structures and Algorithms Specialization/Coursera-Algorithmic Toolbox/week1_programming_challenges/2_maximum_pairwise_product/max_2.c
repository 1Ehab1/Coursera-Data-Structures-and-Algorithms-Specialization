#include<stdio.h>
int main(void)
{
    unsigned long arr[3];
unsigned long size = ( sizeof(arr) / sizeof(arr[0]) );
printf("%lu",size);
return 0;
}
