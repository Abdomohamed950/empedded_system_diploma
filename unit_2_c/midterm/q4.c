#include<stdio.h>
int reverse(int num)
{
    int number=0;
 while(num)
 {
     number*=10;
     number+=(num%10);
     num/=10;
 }
 printf("%d\n",number);
 return number;
}
int main()
{
    reverse(2457);
    reverse(1057);
}
