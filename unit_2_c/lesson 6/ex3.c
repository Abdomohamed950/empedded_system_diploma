#include<stdio.h>

struct comp
{
    float real;
    float imagin;
};

struct comp sum(struct comp opj1 , struct comp opj2)
{
    struct comp add;
    add.real = opj1.real +opj2.real;
    add.imagin = opj1.imagin +opj2.imagin;
    return add;

}


int main()
{
    struct comp opj1 ,opj2;

    printf("enter the first num real and imagin: ");
    scanf("%f",&opj1.real);
    scanf("%f",&opj1.imagin);


    printf("enter the secound num real and imagin: ");
    scanf("%f",&opj2.real);
    scanf("%f",&opj2.imagin);

    printf("the sum of two numbers is %.2f+%.2fi",sum(opj1,opj2).real,sum(opj1,opj2).imagin);

    return 0;
}
