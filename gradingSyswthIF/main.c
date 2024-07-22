#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    char name[20];
    int maths;
    int english;
    int science;
    int eve;
    double avg;
        printf("Hello Welcome to the grading system\n");
        printf("What's your name?: \n");
        gets(name);
        printf("So %s what grade are you in? : \n",name);
        scanf("%d",&grade);
        printf("Nice to meet you %s that is in grade %d \n",name,grade);
        printf("So lets get down to business , what's your grade in Maths: \n");
        scanf("%d",&maths);
        printf("what's your grade in English: \n");
        scanf("%d",&english);
        printf( "Last but not least, what's your grade in science: \n");
        scanf("%d",&science);
        
    eve = maths+science+english;
    avg = eve/3.0;

    if (avg >= 89)
    {
    printf("BRO you did amazingly Well. I am proud of you , Your average is : %.2f \n",avg);
    } 
    else if ( avg <=88 || avg >= 80)
    {
        printf("My guy you did great, keep up the good work. your average is : %.2f next term you might get top 10",avg);
    }
    else if( avg <=79 || avg >=55)
    {
    printf("My guy you did great, we just gotta fix some stuff. your average is : %.2f next term you come back better !",avg);
    }
    else if( avg <=55 )
    {
    printf("we just gotta fix some stuff. your average is : %.2f next term you come back better !",avg);
    }

    else{
    printf("bro something went wrong here hey");
    }

    
  return 0;
}
