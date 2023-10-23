//A c program to count the digit of a number.
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the value of n  :  ");
    scanf("%d",&n);
    do
    {
        n=n/10;
        count++;

    }
    while(n!=0);
    printf("Total number of digits=%d",count);
        return 0;
}
