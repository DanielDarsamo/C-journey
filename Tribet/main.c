#include <stdio.h>
#include <stdlib.h>

int main()
{
 char bet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  
  for(int i=0; i<=26; i++) /* this outer loop controls the amount of lines*/
    {
        for( int j=0; j<=i; j++)/* this inner loop controls the amount of letters being printed*/
            {
            
            printf("%c",bet[j]); // here we access the letter in the array using j and print it 
            }
            printf("\n");/* once we print a letter we come here and print a new line*/
    
  }    

    return 0;
}
