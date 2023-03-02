#include"stdio.h"
float root(float x)
{
    float i;
    for(i=0.01;i*i<x;i+=0.0001);
    printf("%.3f\n",i);

}
int main()
{
    root(4);
    root(10);
}
