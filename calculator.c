#include<stdio.h>
int main()
{
    int n;
    printf("Please,Chose any option what you want to operate: \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Modulo Division\n");

    printf("Enter your option: ");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        {
            int num1,num2;
            printf("Enter the first number: ");
            scanf("%d",&num1);
            printf("Enter the second number: ");
            scanf("%d",&num2);

            printf("Summation: %d\n",num1+num2);

            break;
        }
    case 2:
        {
            int num1,num2;
            printf("Enter the first number: ");
            scanf("%d",&num1);
            printf("Enter the second number: ");
            scanf("%d",&num2);

            printf("Subtraction: %d\n",num1-num2);

            break;
        }

    case 3:
        {
            int num1,num2;
            printf("Enter the first number: ");
            scanf("%d",&num1);
            printf("Enter the second number: ");
            scanf("%d",&num2);

            printf("Multiplication: %d\n",num1*num2);

            break;
        }

    case 4:
        {
            int num1,num2;
            printf("Enter the first number: ");
            scanf("%d",&num1);
            printf("Enter the second number: ");
            scanf("%d",&num2);

            printf("Division: %f\n",(float)num1+num2);

            break;
        }

    case 5:
        {
            int num1,num2;
            printf("Enter the first number: ");
            scanf("%d",&num1);
            printf("Enter the second number: ");
            scanf("%d",&num2);

            printf("Modulo Division: %d\n",num1%num2);

            break;
        }
    }

    return 0;



}
