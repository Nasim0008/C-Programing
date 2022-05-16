// Find GCD and LCM from two given number.

#include<stdio.h>
int main()

{
    //inputting two number
    int num1,num2;
    printf("Enter the value of Num1: ");
    scanf("%d",&num1);

     printf("Enter the value of Num2: ");
    scanf("%d",&num2);

    // keep to number
    int n1 = num1;
    int n2 = num2;

    //Find GCD
    while(n2!=0)
    {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    printf("GCD = %d\n",n1);

    //find LCM
    int lcm = (num1*num2)/n1;

    printf("LCM = %d",lcm);

    return 0;

}

