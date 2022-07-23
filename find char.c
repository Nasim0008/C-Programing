//Find the any particular character has or not

#include<stdio.h>
#include<string.h>

void check(char a[],char ch)
{
    for(int i=0;i<strlen(a);i++)
    {
        char value = a[i];
        if(value == ch)
        {
            printf("Yes\n");
            return;

        }
    }
    printf("No\n");
    return ;
}
int main()
{
    char string[]= "Md Nasim Hossen",ch='s';
    check(string,ch);

    return 0;
}


