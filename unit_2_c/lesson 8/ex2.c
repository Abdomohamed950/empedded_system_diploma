#include<stdio.h>

void main()
{

    char alpha = 'A';
    char *p = &alpha;
    for(int i =0;i<26;i++)
        printf("%c\t",*p+i);
    printf("\n");

}
