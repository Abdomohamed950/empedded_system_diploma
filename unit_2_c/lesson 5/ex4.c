#include"stdio.h"
int power(int base , int pow)
{
    if(pow!=1)
    return base*power(base,pow-1);
}

void main()
{
    printf("%d",power(5,6));
}
