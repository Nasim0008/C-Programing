//Write a program that two number and assigning in the first variable is the max and second is the mininum number.

#include<stdio.h>
int main ()
{
   int a,b,sum=0;
   printf("Enter the value of a : ");
   scanf("%d", &a);
   printf("Enter the value of b: ");
   scanf("%d", &b);
   int min,max;

    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }


    printf("Maximun number :%d\nMinumum number:%d",max,min);
    return 0;
}
