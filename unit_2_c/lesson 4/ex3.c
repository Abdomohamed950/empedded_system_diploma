#include<stdio.h>
int main()
{
    int r , c ,a[100][100];
    printf("enter the numper of rows and columns : \n");
    scanf("%d%d",&r,&c);
    printf("enter the elements of matrix \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a%d%d :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enterd matrix : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose matrix : \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }





    return 0;
}
