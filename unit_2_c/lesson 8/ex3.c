#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    printf("input string : ");
    gets(s);
    printf("output string : ");
    char *p = &s[strlen(s)];
    while(p>=s)
    {
        printf("%c",*p--);
    }


}
