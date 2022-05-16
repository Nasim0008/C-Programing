// Inputting only positive number
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;

    //condition
    while(1)
    {
        printf("Enter the value of N: ");
        scanf("%d",&n);

        if(n<0)
        {
           printf("Your are inputted negative number");
           break;

        }

        printf("The output is %d\n ",n);
    }

    return 0;
}

