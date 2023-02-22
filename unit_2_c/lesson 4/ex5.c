#include<stdio.h>
int main()
{
    int n , a[100],elem,i;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element to search : ");
    scanf("%d",&elem);
    for(i=0;i<n;i++)
        if(a[i]==elem)
            break;
    printf("the location is %d",i+1);


    return 0;
}
