#include<stdio.h>
int main(void)
{
    int input,nchange = 0,change = 0,change1=1,change5=5,change10=10,sum = 0;
    scanf("%d",&input);
    if(input >= 1 && input <= 1000)
    {
        while(sum < input)
        {
            if((sum+change10) <= input)
            {
                change = change10;
            }
            else if ((sum+change10) > input && (sum + change5) <= input)
            {
                change = change5;
            }
            else if ((sum+change10) > input && (sum + change5) > input && (sum + change1) <= input)
            {
                change = change1;
            }
            sum = sum + change;
            nchange++;
        }
        printf("%d",nchange);
    }
}
