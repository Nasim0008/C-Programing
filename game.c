#include<stdio.h>
#include<stdlib.h>// for picking random number.
int main()
{
    // pick a random number
    srand(time(0));//for random number
   int  hidden = rand()%100 +1;// random number from 1 to 100

   printf("Please, Guess a random number from 1 to 100: ");


    int numberofguess = 0;//terminating condition initialization

    while( numberofguess < 10)//irretating loop
    {
        int guess;

        scanf("%d",&guess);


        //cheak condition
        if(guess == hidden)
        {
            printf("Congratulation !! You are Right!!");
            break;//ending the game if you are right

        }
        else if(guess < hidden)
        {
            printf("Guess lerger,please\n");
        }
        else if ( guess > hidden)
        {
            printf("Guess smaller,please\n");
        }
         numberofguess++;// terminating condition update

    }

     if( numberofguess ==10 )//terminated condition
         {
             printf("You are Failed!!");
         }

         return 0;
}
