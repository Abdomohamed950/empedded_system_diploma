#include"stdio.h"
#include"string.h"
int main()
{
    char stri[100] , ch;
    int n=0 , i;
    printf("enter the string : \n");
    gets(stri);
    for(i=strlen(stri)-1;i>=0;i--)
        printf("%c",stri[i]);
    return 0;
}
