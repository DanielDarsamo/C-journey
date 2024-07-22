#include <stdio.h>
#include <stdlib.h>

int main(){
    int age;
    char name[20];
    char color[20];
    char song [20];
 printf("Hi whats your name? \n");
 gets(name);
 printf("Hi %s whats your favorite color? \n",name);
 gets(color);
 printf(" so %s likes %s Depressing \n",name, color);
 printf("\n whats your favorite song %s\n",name);
 gets(song);
 printf("%s nice, I wil listen later. \n",song);
    
    return 0;
}
