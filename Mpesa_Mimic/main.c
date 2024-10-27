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
            case 1: printf("Enter Dar account \n"); break;
            case 2: printf("Enter BANK account \n"); break;
            case 3: printf("1. binance\n 2.Mpesa\n 3.Emola\n 4. Mkesh\n"); break;
        
           }
    case 2: printf("1. ATM  \n 2.AGENT"); break; 
    
 
    
    
    }

    
    return 0;
}
