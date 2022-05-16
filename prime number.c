#include<stdio.h>
int main()
{
    int n,count=0,i=2;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            count++;

        }

    }
    if(count==0)
    {
        printf("Prime Number");
    }

    else
    {
        printf("Not Prime Number");
    }

    return 0;
}

