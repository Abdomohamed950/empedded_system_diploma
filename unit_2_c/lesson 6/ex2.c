#include<stdio.h>

struct dis
{
    int feets;
    float inches;
};

int main()
{
    struct dis opj1 , opj2 ,sum ;
    printf("enter the first distance feet and inches: ");
    scanf("%d",&opj1.feets);
    scanf("%f",&opj1.inches);


    printf("enter the secound distance feet and inches: ");
    scanf("%d",&opj2.feets);
    scanf("%f",&opj2.inches);


    sum.feets=opj1.feets+opj2.feets;
    sum.inches=opj1.inches+opj2.inches;
    if(sum.inches>=12)
    {
        sum.feets++;
        sum.inches-=12;
    }

    printf("the distance is %d\'-%f\"",sum.feets,sum.inches);



}
