#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *rainbow[]={"blue","green","red","orange","purple","yellow"};
    char choice[3];
    char name[15];
    int ramb=6; 
    printf("welcome to guessing your rainbow color\n");
    printf("whats your name ? \n :");
    gets(name);
    printf("hello %s \n",name);
    printf("Lets begin \n");
    printf("you can only choose one color, by answering yes or no \n");
     for(int i=0; i<6; i++)
     {  printf(" Is %s your favorite rainbow color \n",rainbow[i]);
            gets(choice);
       if(choice=="no"){
            ramb--;
            printf ("you have %d colors left ",ramb);
       }
        else if (choice=="yes"){
            printf("YAY");
            return 0;
       
        }
     }
        
    return 0;
}
