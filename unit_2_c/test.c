#include<stdio.h>

void main()
{

    static int a=2 , b=4 , c=6 , d=8;
    static int *arr1[2]={&a,&b};
    static int *arr2[2]={&c,&d};
    int*( *arr[2])[2]={&arr1,&arr2};
    printf("%d %d\t", *(*arr[0])[1]  , *(*(**(arr+1)+1)) );



}
