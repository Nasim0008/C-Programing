// fibonacci number series by using loop
//0 1 1 2 3 5 8 13 21........
#include<stdio.h>
int main()
{
    int first=0,second=1,count=0,n,fibo;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    while(count<n)
    {
        if(count<=1)
        {
           fibo = count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d  ",fibo);
        count++;
    }


}

