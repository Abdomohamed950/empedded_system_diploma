#include<stdio.h>

struct students
{
    char name[40];
    int roll;
    float marks;
};



int main()
{
    struct students student;
    printf("enter the name of the student : ");
    gets(student.name);
    printf("enter the roll of the student : ");
    scanf("%d",&student.roll);
    printf("enter the marks of the student : ");
    scanf("%f",&student.marks);

    printf("the student name is  %s\n",student.name);
    printf(",the student roll is  %d\n",student.roll);
    printf("and the student marks is  %f\n",student.marks);

    return 0;
}
