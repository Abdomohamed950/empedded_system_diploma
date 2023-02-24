#include"stdio.h"
#include"string.h"
void rever(char *i)
{
    if(*i != '\0')
    {
        rever(i+1);
        printf("%c",*i);
    }
}

void main()
{
    rever("hello");
}
