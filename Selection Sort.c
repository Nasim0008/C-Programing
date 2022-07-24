#include<stdio.h>

accending_sort(int *a,int n)
{
    for(int pos=0;pos<n-1;pos++)
    {
        for(int check=pos+1;check<n;check++)
        {
            if(a[check]<a[pos])
               {
                    int temp = a[check];
                    a[check]=a[pos];
                    a[pos]=temp;
               }
        }
    }
}
decending_sort(int *a,int n)
{
    for(int pos=0;pos<n-1;pos++)
    {
        for(int check=pos+1;check<n;check++)
        {
            if(a[check]>a[pos])
               {
                    int temp = a[check];
                    a[check]=a[pos];
                    a[pos]=temp;
               }
        }
    }
}
int main()
{
    int array[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    accending_sort(array,10);
    printf("Accending order: ");
    for(int i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    decending_sort(array,10);
    printf("Decending order: ");
    for(int i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
}
