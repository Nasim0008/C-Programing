// All build in function in string

#include<stdio.h>
#include<string.h>
int main()
{
    // String Reverse:
    char name[]="misaN";
    printf("Reverse: %s\n",strrev(name));//reverse function

    //String length:
    char name2[]="Md Nasim Hossen";
    printf("length = %d\n",strlen(name2));

    //string lower:
    char name3[]="MD NASIM HOSSEN";
    printf("Lowwer : %s\n",strlwr(name3));

    //String Upper:
    char name4[]="md nasim hossen";
    printf("Upper: %s\n",strupr(name4));

    //String cat:
    char name5[]=" Md Nasim",name6[]=" Hossen";
    strcat(name5,name6);
    printf("Conctrat in the first string: %s\n",name5);
    char name7[]=" Hossen",name8[]=" Md Nasim";
    strcat(name8,name7);
    printf("Conctrat in the second string: %s\n",name8);

}

