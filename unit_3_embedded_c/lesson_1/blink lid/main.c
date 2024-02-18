#include<stdint.h>
#define RCC     0X40021000
#define GPIO_PA  0x40010800

#define APB2ENR *(volatile unsigned long long *)(RCC+0x18)
#define CRH *(volatile unsigned long long *)(GPIO_PA+0x04)
#define ODR (GPIO_PA+0x0c)

typedef union{
    volatile unsigned long long port;
    struct 
    {
        volatile unsigned long long reserved:13;
        volatile unsigned long long pin13:1;
    }pins;

}ports;

volatile ports* port_a = (volatile ports*)ODR;

int main()
{
    APB2ENR |=  (1<<2);
    CRH     &=  0xff0fffff;
    CRH     |=  0x00200000;

    while(1)
    {
        port_a->pins.pin13=1;
        for(int i = 0;i<5000;i++);
        port_a->pins.pin13=0;
        for(int i = 0;i<5000;i++);        
    }

}