#include"stdio.h"
int factorial(int number)
{
    if(number!=1)
        return number*factorial(number-1);

}

void main()
{
    printf("%d",factorial(5));
}
