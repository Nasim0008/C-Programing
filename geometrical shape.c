#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Please,chose any option which area you want to calculate: \n");
    printf("1. Triangle\n");
    printf("2. Circle\n");
    printf("3. Square\n");
    printf("4. Ractangle\n");
    printf("5. Parallelogram\n");
    printf("6. Rhombus\n");
    printf("7. Trapezium\n");
    printf("8. Cube\n");
    printf("9. Cone\n");
    printf("10. Cylinder\n");

    printf("\nPlease,Enter your choise: ");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        {

            float base,height,area;
            printf("Enter the base: ");
            scanf("%f",&base);

            printf("Enter the heght: ");
            scanf("%f",&height);

            area = 0.5*base*height;

            printf("The area of triangle: %0.2f square unit",area);
            break;
        }
    case 2:
        {
            float redius,area;

            printf("Enter the redius: ");
            scanf("%f",&redius);

            area = 3.1416*redius*redius;
            printf("The area of circle: %0.2f square unit",area);
            break;
        }
    case 3:
        {
            float side,area;
            printf("Enter the side: ");
            scanf("%f",&side);

            area = (side*side);

            printf("The area of Square: %0.2f square unit",area);
            break;
        }
    case 4:
        {
            float lenght,width,area;
            printf("Enter the lenght: ");
            scanf("%f",&lenght);

            printf("Enter the width: ");
            scanf("%f",&width);

            area = lenght * width;

            printf("The area of ractengle: %0.2f square unit",area);
            break;
        }
    case 5:
        {
            float base,height,area;
            printf("Enter the base: ");
            scanf("%f",&base);

            printf("Enter the height: ");
            scanf("%f",&height);

            area = base*height;
            printf("The area of Parallelogram: %0.2f square unit",area);
            break;
        }
    case 6:
        {
            float diagonal1,diagonal2,area;
            printf("Enter the first diagonal: ");
            scanf("%f",&diagonal1);
            printf("Enter the second diagonal: ");
            scanf("%f",&diagonal2);

            area = 0.5*diagonal1*diagonal2;
            printf("The area of Rhombus: %0.2f square unit",area);
            break;
        }

    case 7:
        {
            float base1,base2,height,area;
            printf("Enter the upper base: ");
            scanf("%f",&base1);
            printf("Enter the lower base: ");
            scanf("%f",&base2);
            printf("Enter the height: ");
            scanf("%f",&height);

            area = 0.5*(base1+base2)*height;
            printf("The area of trapezium: %0.2f square unit",area);
            break;
        }
    case 8:
        {
            float side,area;
            printf("Enter the side: ");
            scanf("%f",&side);

            area = 6*side*side;
            printf("The area of cube: %0.2f square unit",area);
            break;
        }
    case 9:
        {
            float redius,height,area;
            printf("Enter the redius: ");
            scanf("%f",&redius);
            printf("Enter the height: ");
            scanf("%f",&height);

            area = (3.1416*redius)*(redius+(sqrt((height*height)+(redius*redius))));
            printf("The area of cone: %0.2f square unit",area);
            break;
        }
    case 10:
        {
            float height,redius,area;
            printf("Enter the redius: ");
            scanf("%f",&redius);

            printf("Enter the height: ");
            scanf("%f",&height);

            area = (2*3.1416*redius*height)+(2*3.1416*redius*redius);
            printf("The area of Cylinder: %0.2f square unit",area);
            break;
        }
        default :
        {
            printf("Sorry,sir!! you choose invalid option\n ");
        }

    }

    getch();
    return 0;
}
