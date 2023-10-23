//A c program to calculate the sum of digits of any number.
#include<stdio.h>
int main()
{
    int n,reminder,sum=0;
    printf("Enter the value of n :  ");
    scanf("%d",&n);
    while(n>0)
    {
        reminder=n%10;
        n=n/10;
        sum=sum+reminder;
    }
    printf("sum=%d",sum);
    return 0;
}
