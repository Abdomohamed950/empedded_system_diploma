#include<stdio.h>
int main()
{
    int n ,average=0 ,arr[100];
    printf("enter the numper of data\n");
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        printf("%d - enter number : ",i);
        scanf("%d",&arr[i]);
        average+=arr[i];
    }
    printf("average = %d",average);

    return 0;
}
