#include"stdio.h"
//#include"string.h"
int main()
{
    char stri[100] , ch;
    int n=0 , i;
    printf("enter the string : \n");
    gets(stri);
    printf("enter the char : ");
    scanf("%c",&ch);
    for(i=0;stri[i]!='\0';i++)
    {
        if(stri[i]==ch)
            n++;

    }
    printf("the freq is : %d",n);

    return 0;
}
