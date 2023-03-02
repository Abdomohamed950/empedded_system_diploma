#include<stdio.h>
int prime(int start , int end)
{
    int i;
    if (start==1)
    {
        printf("%d\t",start);
        ++start;
    }

    for (;start<=end;start++)
    {
        int flag = 1;
        for(i=2;i<start;i++)
        {
            if(start%i==0)
            {
                flag=0;
                break;
            }

        }
        if(flag)
        {
            printf("%d\t",i);
        }
    }
}

int main ()
{
    prime(1,20);

}
