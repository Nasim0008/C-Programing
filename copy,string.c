#include<stdio.h>
int main()
{
    char str[]="Md Nasim Hossen";
    char str2[20];
    int i=0;
    while(str[i]!='\0')
    {
        str2[i] = str[i];
        i++;
    }
    printf("%s\n",str2);

    strcpy(str2,str);
    printf("%s\n",str2);

    strncpy(str2,str,10);
    printf("%s\n",str2);

}
