#include"stdio.h"

int sum (int num)
{
    int new_num=0;
    if(num>0){
        new_num+=(num%10);
        num=num/10;
        new_num+= sum(num);
    }
    else
        return 0;
    return new_num;
}

int main()
{
    printf("%d\n",sum(123));
    printf("%d\n",sum(4565));
    return 0;
}
