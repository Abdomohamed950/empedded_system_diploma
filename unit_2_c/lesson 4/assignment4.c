#include<stdio.h>
int main()
{
    printf("enter the element of first matrix\n");
    int a[2][2];
    for(int i =0 ;i <2;i++)
    {
        for(int j =0;j<2;j++)
        {
            printf("enter a%d%d :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element of secound matrix\n");
    int b[2][2];
    for(int i =0 ;i <2;i++)
    {
        for(int j =0;j<2;j++)
        {
            printf("enter a%d%d :",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("the sum of 2 matrix is\n");
    for(int i =0 ;i <2;i++)
    {
        for(int j =0;j<2;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }





    return 0 ;
}
