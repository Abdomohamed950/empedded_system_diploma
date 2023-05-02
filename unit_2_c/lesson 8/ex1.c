#include<stdio.h>

void main()
{
    int m = 29;
    printf("Address of m : 0x%x\n",&m);
    printf("Value of m : %d\n\n\n",m);


    int *ab = &m;
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of ab : 0x%x\n",ab);
    printf("Value of ab : %d\n\n\n",*ab);

    m=23;
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of ab : 0x%x\n",ab);
    printf("Value of ab : %d\n\n\n",*ab);


    *ab=7;
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    printf("Address of m : 0x%x\n",&m);
    printf("Value of m : %d\n\n\n",m);



}
