#include <stdio.h>
#include <stdlib.h>

// put a return to main menu function 
int main()
{
    int menu1;
    int user;
    
    
    printf(" \xdb\xdb\xdb WELCOME TO DAR-PAYMENTS \xdb\xdb\xdb \n");
    printf(" \xdb\xdb\xdb  1.Send Money           \xdb\xdb\xdb \n \xdb\xdb\xdb  2.Withdraw Money       \xdb\xdb\xdb \n \xdb\xdb\xdb  3.Buy Airtime          \xdb\xdb\xdb\n \xdb\xdb\xdb  4.Loans and Savings    \xdb\xdb\xdb\n \xdb\xdb\xdb  5.Financial Services   \xdb\xdb\xdb\n \xdb\xdb\xdb  6.Buy Credelec         \xdb\xdb\xdb\n \xdb\xdb\xdb  7.My Account           \xdb\xdb\xdb");
    printf("\n Enter : ");
    scanf("%d",&menu1);
    system("cls");
    switch(menu1){
    case 1: printf(" 1.Send to DAR \n 2.Send To Bank \n 3.Send to another payment network \n");
           scanf("%d",&user);
           
           switch (user){
            case 1: printf("Successfully sent to  Dar account \n"); break;
            case 2: printf("sucessfully sent to the BANK account \n"); break;
            case 3: printf(" The following networks are unavailable : \n 1. binance\n 2.Mpesa\n 3.Emola\n 4. Mkesh\n"); break;
           } break; 
    case 2: printf("1. ATM  \n 2.AGENT \n");
            scanf("%d",&user);
           switch(user){
               case 1: printf(" Withdrawal on ATM successfully done  "); break; 
               case 2: printf("Withdrawal with Agent successfully done "); break;
               } break;
               
    case 3: printf("enter the amount for the airtime \n"); 
            scanf("%d",&user);
            printf("Successfully recharged airtime amount of %d",user);
             break;
 
    
    case 4 : printf ("Please present your bank statement to the nearest DARTECH shop for a possible Loan or Savings plan"); break;
    case 5: printf("Access your Financial service on DarFIN/User10293.com"); break;
    case 6: printf("enter the amount for the Credelec \n"); 
            scanf("%d",&user);
            printf("Successfully recharged credelec amount of %d",user);
             break;
    case 7: printf("User account Unavailable"); break; 
    
    
    default: 
        printf("option Invalid , Goodbye");
    }

    
    return 0;
}
