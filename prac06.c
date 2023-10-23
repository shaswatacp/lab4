// A c program to find the first and last digit of a number.
#include<stdio.h>
int main()
{
    int n,firstdigit,lastdigit;
    printf("Enter any number  : ");
    scanf("%d",&n);
    lastdigit=n%10;
    while(n>10)
    {
        n/=10;
    }
    firstdigit=n;
    printf("lastdigit=%d\n",lastdigit);
    printf("firstdigit=%d\n",firstdigit);
    return 0;
}
