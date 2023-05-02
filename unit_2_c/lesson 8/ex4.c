#include<stdio.h>
void main()
{
    int arr[15];
    int size;
    printf("Input the number of elements to store in the array (max 15) : ");
    scanf("%d",&size);
    printf("Input 5 number of elements in the array :\n");
    for (int i =0;i<size ; i++)
    {
        printf("element -%d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int *p = &arr[size-1];
    int i =size;
    while(p>=arr)
    {

        printf("element -%d: %d\n",i--,*p--);
    }


}

