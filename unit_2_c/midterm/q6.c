#include<stdio.h>

int uniq(int arr[],int size)
{
    int i =0,sum=0,newarr[100]={};
    for(;i<size;i++)
    {
        if(newarr[arr[i]]==0)
        {
            newarr[arr[i]]=1;
            sum+=arr[i];
        }
        else if(newarr[arr[i]]==1)
        {
            sum-=arr[i];
            newarr[arr[i]]=2;
        }

    }
    return sum;
}

int main()
{
    int a[7]={4,2,5,2,5,7,4};
    printf("%d\n",uniq(a,7));
    int b[3]={4,2,4};
    printf("%d\n",uniq(a,3));
}
