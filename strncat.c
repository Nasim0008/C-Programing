// particular character adding with any string
#include<stdio.h>
int main()
{
    char string1[]="Hello i am";
    char string2[]=" ripon video";
    strncat(string1,string2,6);// the number 6 can be replaced by any number
    printf("%s",string1);

    return 0;
}

