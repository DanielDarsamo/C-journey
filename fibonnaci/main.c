#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int f;
    printf("enter the nr you want to find the Fibonacci result: \n ");
    scanf("%d",&f);
    printf(" the fibonnaci result for f(%d) is %d \n",f,fibo(f));
    return 0;
}
int fibo(int f ){
   
    if( f==0){
        return 0;
    }
    if(f == 1){
        
        return 1;
    }
    
 if (f >=2){
    return fibo(f-1)+ fibo(f-2);
 }

}
