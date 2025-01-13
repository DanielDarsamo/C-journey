#include <stdio.h>
#include <stdlib.h>
int arithmetic_syn( int a, int b);
int decrement(int a , int b);
int quotient_det(int a , int b);
int product(int a , int b);
int main()
{ 
    char name[20]; 
    int ops; 
    int varx_a;
    int varx_b;
    int endthis=0;
    do{
    printf(" Hi, whats your name ?\n");
    gets(name);
    printf("Hi %s \n",name); 
    printf("Welcome to the DigitDynamo\n");
    printf("DigitDynamo is easy to use \n Enter the number corresponding to what operation would like to use \n");
    printf("1:Arithmetic synthesis \n 2: Quotient determination \n 3:Decremental Calculation \n 4:Product computation \n");
    printf("Enter number of choice: ");
    scanf("%d",&ops);
    system("cls");
    switch (ops){
    case 1: printf("Welcome to Arithmetic synthesis \n");
              printf("Your first Variable :");
              scanf("%d",&varx_a);
              printf("Your second Variable :");
              scanf("%d",&varx_b);
            printf( "your result is :%d \n",arithmetic_syn(varx_a,varx_b));
            break;
    
    case 2: printf("Welcome to Quotient Determination \n");
                 printf("Your first Variable : \n");
              scanf("%d",&varx_a);
              printf("Your second Variable : \n");
              scanf("%d",&varx_b);
                  printf( "your result is: %d \n",quotient_det(varx_a,varx_b));
    break;
    case 3: printf("Welcome to Decremental Calculation \n");
                printf("Your first Variable : \n");
              scanf("%d",&varx_a);
              printf("Your second Variable : \n");
              scanf("%d",&varx_b);
            printf( "your result is: %d \n",decrement(varx_a,varx_b));
    break;
    case 4: printf("Welcome to Product Computation \n");
             printf("Your first Variable : \n");
              scanf("%d",&varx_a);
              printf("Your second Variable : \n");
              scanf("%d",&varx_b);
                  printf( "your result is: %d \n",product(varx_a,varx_b));
    break;
    
    default:
        printf("Invalid choice \n");
        
    }
    
    
    printf("Would You like to return to the main menu? \n  Enter 0 for yes and 1 for No ");
    printf("Enter choice :");
    scanf("%d",&endthis);
    
    
    }
    while(endthis == 0);
    
    
    
  

    return 0;
}





int arithmetic_syn( int a, int b){
return a+b;

}
int decrement(int a , int b){
return a-b;

}
int quotient_det(int a , int b){
return a/b;

}
int product(int a , int b){
return a*b;

}

