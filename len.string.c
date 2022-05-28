#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("Enter the string: ");
    fgets(name,100,stdin);
    printf("%s\n",name);
    int len = 0 ;
    while(name[len] != '\0' )//without built in function
    {
        len++;
    }
    int l = strlen(name);// with built in function
    printf("the string lenght is %d\n",len);
    printf("The lenght of string : %d\n",l);

    return 0;

}

