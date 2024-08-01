#include <stdio.h>
#include <stdlib.h>

int main()
{ 
 int secretnr=7; // the number the user as to guess
 int entry; // where user will enter their guess
 int guesscount=0; // tells us the amount of guess of the user
 int guesslimit=3; // guess limit
 int outofguess=0; // would act as boolean value, if out of guess get out of the loop and become 1 and execute the rest
 int guessleft;
 
 printf("\xdb\xdb\xdb Welcome to the guessing game \xdb\xdb\xdb\xdb \n \n");
 printf("\xdb\xdb\xdb you have to guess whats the secret nr (0-10) \xdb\xdb\xdb\xdb \n \n");
 printf("\xdb\xdb\xdb you have 3 guesses \xdb\xdb\xdb\xdb \n \n");
 
 
 
 while(entry != secretnr && outofguess == 0)//
    {
        if (guesscount< guesslimit)//
            {
                guessleft= guesslimit-guesscount;
                printf ("Guesses left : %d \n \n ",guessleft);
                printf("enter guess: ");
                scanf("%d",&entry);
                guesscount++;
           

        
        } else{
            outofguess =1; 
            }
    }
    
   if (outofguess!= 0) //
        {
         printf("you lost");
         
        }
   
    else{ 
            printf("you won");
    }
 

    return 0;
}
