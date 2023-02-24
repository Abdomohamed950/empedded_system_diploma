#include"stdio.h"

void prime(int x , int z)
{
    for(;x<=z;x++)
    {
        int flag=0;
        for(int j=2;j<x;j++)
        {
            if(x%j==0)
            {
                flag=1;
                break;
            }

        }
        if(flag)
            continue;
        printf("%d\t",x);
    }
}
int main()
{
    prime(10,30);

    return 0;
}
