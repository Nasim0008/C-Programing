//Lenear search

#include<stdio.h>
int main()
{
    int pos=-1,value;//index is start from 0
    int num[]={1,2,3,4,5,6,7,8,9,10,38,20,18,39,38,39,27,14};

    printf("Enter the value what you want to search: ");
    scanf("%d", &value);

    for(int i=0;i<59;i++)
    {
        if(value == num[i])
        {
            pos=i+1;
            break;
        }
    }

    if(pos==-1)
    {
        printf("Item is not found\n");
    }
    else
    {
        printf("value = %d\nposition = %d\n",value,pos);

    }

    return 0;
}


