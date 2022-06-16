// particular character coping
#include<stdio.h>
int main()
{
    char string1[]="Hello i am ripon video";
    char string2[100];
    strncpy(string2,string1,9);// the number 9 can be replaced by any number
    printf("%s",string2);

    return 0;
}
