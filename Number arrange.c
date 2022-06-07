//write a program that take 3 input and arrange it as decreasing order
//a is largest than b and b is larger than c
#include <stdio.h>

int main()

{

    int a, b, c, temp;

    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);


    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if (b < c)

    {
        temp = b;
        b = c;
        c = temp;
    }

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    printf("a = %d\n" ,a);
    printf("b = %d\n" ,b);
    printf("c = %d\n" ,c);
}

