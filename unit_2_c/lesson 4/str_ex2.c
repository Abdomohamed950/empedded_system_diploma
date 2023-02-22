#include"stdio.h"
//#include"string.h"
int main()
{
    char stri[100] , ch;
    int n=0 , i;
    printf("enter the string : \n");
    gets(stri);
    for(i=0;stri[i]!='\0';i++);
    printf("the length is : %d",i);

    return 0;
}
