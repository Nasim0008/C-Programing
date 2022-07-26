//Triple pointer and also hints of multi level pointer and so on..


#include<stdio.h>
int main()
{
    int a=100;
    int *p=&a;//variable (p) point to the address of a;
    int **q=&p;
    int ***r=&q;
    ***r=150;//triple pointer change the value of a
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%d\n",***r);//pointer r pointer the q then q pointer also point to the p
     //and then p pointer point to the value of a
    return 0;
}

