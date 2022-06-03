#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
            sum +=i;
        }

    }
    printf(" sum = %d\n",sum);
    if(sum == n)
    {
        printf("This is a perfect number!!");
    }

    else
    {
        printf("This is not a perfect number!!");
    }

    return 0;

}

