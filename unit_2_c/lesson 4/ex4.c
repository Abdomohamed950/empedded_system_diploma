#include<stdio.h>
int main()
{
    int a[100],n,elem,pos;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    for(int i =0 ; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the new element : ");
    scanf("%d",&elem);
    printf("enter the position : ");
    scanf("%d",&pos);
    for(int i =n ; i<=n;i--)
    {
        a[i]=a[i-1];
        if(i==(pos-1))
        {
            a[i]=elem;
            break;
        }
    }
    for(int i =0 ; i<=n;i++)
    {
     printf("%d ",a[i]);
    }

 return 0 ;
}
