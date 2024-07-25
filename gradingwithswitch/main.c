#include <stdio.h>
#include <stdlib.h>


int aveg(int num1 , int num2 , int num3){
int result = num1+num2+num3/3;

return result;

}


int main()
{
    int grade;
    char name[20];
    char grd;
    int aver;
    int science;
    int maths;
    int english;
    
    printf("Hello Welcome to the Grade system!\n");
    printf("What is your name?: \n");
    gets(name);
    printf("Hi %s , Lets get started\n",name);
    printf(" %s , Whats your grade in english: \n",name);
    scanf("%d",&english);
    printf(" %s , Whats your grade in maths: \n",name);
    scanf("%d",&maths);
    printf(" %s , Whats your grade in science: \n",name);
    scanf("%d",&science);
    aver=aveg(english,maths,science);
    
    if (aver >= 90){
        grd='A';
    }
    else if (aver >= 80 ){
        grd='B';
    }
    else if (aver >=70){
        
        grd='C';
    }
    
    else if (aver >=60){
        
        grd='D';
    }
    
    else if (aver <= 49){
        
        grd='F';
    }
    
    
    else{
        printf("Something went Wrong");
    }
    
    
    switch (grd){
    case 'A': printf("you passed with an  A "); break;
    case 'B': printf("you passed with a  B "); break;
    case 'C': printf("you passed with a  C "); break;
    case 'D': printf("you passed with a D  "); break;
    case 'F': printf("you failed my boy , big F "); break;
    
    
    default:
        {
            printf(" Something went wrong");
        }
    
    
    
    }
    
    
    
  
  
  
    
    return 0;
}
