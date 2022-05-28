#include<stdio.h>
int main()
{
   char name[10];
   printf("Enter the name: ");
   fgets(name,10,stdin);     /* protect over flow,
                            only take the highest size of array ;
                            this is a string input function with a perfect size;
                            syntex : fgets(array name , size, stdin)*/
   printf("Hello,%s",name);

   return 0;
}


