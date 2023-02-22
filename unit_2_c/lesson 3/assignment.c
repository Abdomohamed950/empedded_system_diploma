#include<stdio.h>
int main()
{
    // int x =6;
    // int z =7;
    // printf("before swaping x=%d and z = %d\n",x,z);   
    // x=x^z; 
    // z=x^z;
    // x=x^z;
    // printf("after swaping x=%d and z = %d\n",x,z);    


    // char a ='\012';
    // printf("%d",a);



    // int a =2;
    // if (a--,--a,a)
    //     printf("if");
    // else 
    //     printf("else");

    // return 0 ;

    int a =5;
    switch (a)
    {
    
    default:
        a=4;
    
    case 6:
    a+=1;
    case 5:
    /* code */
    a+=1;
    case 0:
    a+=1;
    }

    printf("%d",a);

}