#include<stdio.h>
#include<math.h>
int binary(float num)
{
    int i = log2(num),count =0;
    for(;i>=0;i--)
    {
        if(num>=pow(2,i))
        {
            count++;
            num-=pow(2,i);
        }
    }
    return count;
}
int main()
{
 printf("%d\n",binary(5));
 printf("%d\n",binary(15));
    return 0;
}
