#include<stdio.h>
#include<string.h>
int main()
{
    char name[100],name2[100];
    printf("Enter the first string : ");
    gets(name);
    printf("Enter the second string : ");
    gets(name2);

   int  n = strcmp(name,name2); //use built in function

    if(n==0)
    {
        printf("string are equals");
    }
    else // when return positive that's means first string is larger and vice versa
    {
        printf("String are not equals");
    }

    return 0;
}

