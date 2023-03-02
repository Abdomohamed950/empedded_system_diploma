#include<stdio.h>

void reverse(int arr[],int size)
{
    --size;
    for (;size>=0;size--)
        printf("%d\t",arr[size]);

}

int main()
{
    int arr[]={1,2,3,4,5};
    reverse(arr,5);

    return 0;
}
