#include"stdio.h"
#include<math.h>

void rev(int ar[],int ar1[],int ar_size)
{
    int i=ar_size-1,j=0;
    for(;i>=0;i--,j++)
        ar1[j]=ar[i] ;
    for(i =0;i< ar_size;i++)
        printf("%d ",ar1[i]);
}

void swa(int ar[],int ar1[],int ar_size,int ar1_size)
{
    int i=0,j=0;
    if(ar1_size>ar_size)
        ar_size=ar1_size;
    for(i=0;i<ar_size;i++){
        ar1[i]=ar[i]^ar1[i] ;
        ar[i]=ar[i]^ar1[i] ;
        ar1[i]=ar[i]^ar1[i] ;}
    for(i =0;i< ar_size;i++)
        printf("ar[%d] = %d ,ar2[%d] = %d \n",i,ar[i],i,ar1[i]);
}


int clear_specifed_bit(int n, int bit)
{
    return n &=~(1 << bit);
}

int read_specifed_bit(int n, int bit)
{
    return n &=(1 << bit);
}

int search(int arr[], int size , int key)
{
    int i=size-1;
    for(;i>=0;i--)
        {
        if(arr[i]==key)
            {
            printf("%d \n" ,i);
            return 1;
            }
}
            printf("-1\n");
            return 0;
}

int checkpower(unsigned int n)
{
    double i = log(n)/log(3);
    return i == trunc(i);
}


int myfun ()
{
        int y=20;
return y;
}


void myfun (int arr[]){
int size=sizeof (arr) /sizeof (arr[0]) ;
printf ("%d ", size) ;
}
int main (){
printf("%d %d %d",sizeof (3.14), sizeof (3.14f) , sizeof ("3.14") )
return 0:
}
