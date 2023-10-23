//A c program to calculate the sum of first 'n' natural numbers.
#include<stdio.h>
int main()
{
 int  num,count,sum=0;
    printf("Enter an integer  :  ",num);
    scanf("%d",&num);

    for(count=1;count<=num;count++)
    {
        sum+=count;
    }
    printf("sum=%d",sum);
    return 0;
}

