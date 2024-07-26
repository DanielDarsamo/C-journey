#include <stdio.h>
#include <stdlib.h>

struct Student {
int age;
int grade;
char name[20];


};




int main()
{
    struct Student student1;
    
    
    
    
    printf("welcome DACD Academy, Before using the application lets Register! \n");
    printf(" Enter name: \n");
    gets(student1.name);
    printf("Enter Age: \n");
    scanf("%d",&student1.age);
    printf("Enter Grade: \n");
    scanf("%d",&student1.grade);
    printf("This is your information: \n");
    printf(" Student name:%s \n Student Age:%d \n Grade: %d\n",student1.name , student1.age, student1.grade);
    
    
    return 0;
}
