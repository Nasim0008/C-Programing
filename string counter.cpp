// string as a counter

#include<bits\stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int count[100]={0};
    gets(str);


    for(int i=0;i<strlen(str);i++)
    {
        char val = str[i];
        count[val-97]++;
    }

    for(char val='a';val<='z';val++)
    {
        if(count[val-97]>0)
        {
            printf(" %c has %d times\n",val,count[val-97]);
        }
    }

}
