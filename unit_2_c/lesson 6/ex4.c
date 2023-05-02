#include<stdio.h>

struct students
{
    char name[40];
    int roll;
    float marks;
};



int main()
{
    struct students student[10];
    printf("enter the information of students : ");
    for (int i = 0 ; i<10;i++)
    {
        printf("for roll number %d \n",i+1);
        student[i].roll=i+1;

        printf("enter name : \n");
        scanf("%s", student[i].name);

        printf("enter marks : \n");
        scanf("%f",&student[i].marks);


    }

    for (int i = 0 ; i<10;i++)
    {
        printf("information for roll number %d\n",student[i].roll);
        printf("name is  %s\n",student[i].name);
        printf("marks is  %f\n",student[i].marks);
    }


    return 0;
}

