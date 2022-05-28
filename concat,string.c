#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="md nasim hossen and ";
    char b[]="mst ayesha khatun";
    int lena=strlen(a);//without built in function
    int lenb=strlen(b);
    int lenc=lena+lenb;
    char c[lenc];

    for(int i=0;i<lena;i++)
    {
        c[i] = a[i];
    }
    for(int i=0;i<lenb;i++)
    {
        c[lena+i]= b[i];
    }

    printf("%s\n",c);

    strcat(a,b);//with built in function
    printf("%s",a);

    return 0;

}
