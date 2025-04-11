#include <stdio.h>
#include <stdlib.h>

int main()
{ int userloginstart;

    printf("\xdb\xdb\xdb\xdb\xdb\xdb\ Welcome to the DACD ACADEMY \xdb\xdb\xdb\xdb\xdb\xdb\ \n");
    printf("\xdb\xdb\xdb\xdb\xdb\xdb\     1. Admin Login \xdb\xdb\xdb\xdb\xdb\xdb\ \n");
    printf("\xdb\xdb\xdb\xdb\xdb\xdb\     2. Student Login \xdb\xdb\xdb\xdb\xdb\xdb\ \n");
    printf("Enter number : \n");
    scanf("%d",&userloginstart);
    
 switch (userloginstart){
    case 1 : printf("Please Enter Your Admin nr: \n");
    case 2: printf("Please Enter Your student nr: \n");
    
    } 
    
    return 0;
}
