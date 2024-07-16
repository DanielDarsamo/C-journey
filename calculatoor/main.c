#include <stdio.h>
#include <stdlib.h>

int main()
{ 
   int age;
   double ave;
   int option;
   char name[20];
   int num1;
   int num2;
   int result;
 
   printf("|||||||||||||||||||||hello, Welcome to DarCalculator||||||||||||||||||\n");
   printf ( "what is your name?\n");
   gets(name);
   printf("How old are you ?\n");
   scanf("%d",&age);
   printf("Whats your maths average?\n" );
   scanf("%lf",&ave);
   printf("you are %s , you are %d old and your average in maths is %f.\n",name,age,ave);
   printf("What would you like to do with your calculator %s\n",name);
   printf("\n 1. Sum \n 2.division \n 3.Multiplication \n");
   printf("enter option : \n");
   scanf("%d",&option);
   
   if(option == 1){
        printf("||||LETS DO SOME ADDITION |||| \n ");
        printf("enter nr1: \n");
       scanf("%d",&num1);
       printf("enter nr2: \n");
       scanf("%d",&num2);
       result=num1+num2;
       printf(" your result is %d \n",result);
    printf("BYE THANK YOU");
       
}
   else if( option ==2 ){
        printf("||||LETS DO SOME DIVISION |||| \n ");
        printf("enter nr1: \n");
       scanf("%d",&num1);
       printf("enter nr2: \n");
       scanf("%d",&num2);
       result=num1/num2;
       printf(" your result is %d \n",result);
      printf("BYE THANK YOU");
       
    
   } 
 
else if(option==3){ 
    printf("||||LETS DO SOME MULTIPLICATION |||| \n ");
    printf("enter nr1: \n");
       scanf("%d",&num1);
       printf("enter nr2: \n");
       scanf("%d",&num2);
       result=num1*num2;
       printf(" your result is %d \n",result);
       printf("BYE THANK YOU");
       
   }
   else{
    
    printf("something went wrong bro!!!");
   }
    return 0;
    
    
}
