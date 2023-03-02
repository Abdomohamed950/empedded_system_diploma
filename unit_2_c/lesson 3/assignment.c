// // #include<stdio.h>
// // int main()
// // {
// //     // int x =6;
// //     // int z =7;
// //     // printf("before swaping x=%d and z = %d\n",x,z);   
// //     // x=x^z; 
// //     // z=x^z;
// //     // x=x^z;
// //     // printf("after swaping x=%d and z = %d\n",x,z);    


// //     // char a ='\012';
// //     // printf("%d",a);



// //     // int a =2;
// //     // if (a--,--a,a)
// //     //     printf("if");
// //     // else 
// //     //     printf("else");

// //     // return 0 ;

// //     int a =5;
// //     switch (a)
// //     {
    
// //     default:
// //         a=4;
    
// //     case 6:
// //     a+=1;
// //     case 5:
// //     /* code */
// //     a+=1;
// //     case 0:
// //     a+=1;
// //     }

// //     printf("%d",a);

// // }



// #include"stdio.h"

// int factorial(int number)
// {
//     if(number!=1)
//     return number*factorial(number-1);

// }





// void main()
// {
//     factorial(5);

// }



#include"stdio.h"
#include"string.h"

#include"stdio.h"

int sum (int num)
{
    int new_num=0;
    if(num>0){
        new_num+=(num%10);
        num=num/10;
        new_num+= sum(num);
    }
    else
        return 0;
    return new_num;
}


int main()
{

    printf("%d",sum(123));

    return 0;
}


