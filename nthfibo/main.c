#include <stdio.h>
#include <stdlib.h>
int nth(int n );
int main()
{
    int n= 6;
    for(int i=0; i<=n; i++ ){
    printf(" The result of the fibo in position %d is: %d \n",i,nth(i));
    
    }

    return 0;
}
int nth(int n ){
    
    
    if (n ==0){
        return 0;
    }
    if (n ==1){
        return 1;
    }

    if (n >= 2){
        
          
            
        return nth(n-1)+nth(n-2);
    }

}

