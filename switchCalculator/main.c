#include <stdio.h>
#include <stdlib.h>

int main()
{
  int option;
  int result;
  int num1;
  int num2;
  
        printf("|||||||||Welcome to CALCULATORRR||||||||||| \n");
        printf("choose an Option\n 1.Addition \n 2.Multiplication \n 3.Division \n :");
        scanf("%d",&option);
        
    switch(option){
    case 1 : printf("\n Hello lets do some Addition\n"); 
            printf("enter the first nr: \n");
            scanf("%d",&num1);
            printf("enter the second  nr: \n");
            scanf("%d",&num2);
            result= num1+num2;
            printf("your result is %d \n",result);
            break;
            
    case 2 : printf("\n Hello lets do some multiplication\n"); 
            printf("enter the first nr: \n");
            scanf("%d",&num1);
            printf("enter the second  nr: \n");
            scanf("%d",&num2);
            result= num1*num2;
            printf("your result is %d \n",result);
            break;
            
    case 3 : printf("\n Hello lets do some division \n"); 
            printf("enter the first nr: \n");
            scanf("%d",&num1);
            printf("enter the second  nr: \n");
            scanf("%d",&num2);
            result= num1/num2;
            printf("your result is %d \n",result);
            break;
            
   
    default: printf("invalid option");
    
    
    }
        
        
        
        
        
        
        
    return 0;
}
