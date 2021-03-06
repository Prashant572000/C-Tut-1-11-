#include <stdio.h>
#include <math.h>
int main()
{
//                       Type declaration instructions
    // int a=4, b,c;
    // b=c=a;
    // printf("The val of a is %d\n" , a);
    // printf("The val of b is %d\n" , b);
    // printf("The val of c is %d\n" , c);
    // float a=1.1;
    // float b=8.9;
    // printf("Sum of a and b is %.2f" , a+b);

//                        Arithmetic declaration instructions
    int a = 4;                    //a and b are Operands(can be int,float, char), + - * /- Operators
    int b = 8;
    int z = b * a;      // Legal
    // int b*a=z;          // Illegal
    // printf("The val of z is %d\n", z);
    // printf("The val of a+b is %d\n", a + b);
    // printf("The val of a-b is %d\n", a - b);
    // printf("The val of a*b is %d\n", a * b);
    // printf("The val of a/b is %d\n", a / b);
    // printf("5 when divided by 2 reminder is %d\n"  , 5%2);       // -5/2 = -1 , 5/-2=1

//          There is no operator to perform exponentiation in C, However we can use fn from <math.h>
    // printf("The value of 2 to the power 4 is %.1f\n" , pow(2,5));
    // printf("The value of 6   + 5.6 is  %d\n" , 6   + 5);         // int   and int   = int
    // printf("The value of 6   + 5.6 is  %.1f\n" , 6   + 5.6);     // float and int   = float
    // printf("The value of 6.1 + 5.6 is  %.1f\n" , 6.1 + 5.6);     // int   and float = float
    // float k = 3.0 / 9;
    // printf("Val of k is %f", k);
    
//                    Operators Precedence - which operator evaluates 1st
    int x=2 , y=3;
    printf("Value of 3x - 8y is : %d\n" , 3*x - 8*y);
    printf("Value of 3x - 8y is : %d\n" , 3*(x - 8*y));
    printf("Value of 8*y /3*x is : %d\n" , 8*y /3*x);   // 8*3 / 3*x =>  24/3*2 => 8*2 => O/P - 16
    // It follows associativity read notes
    return 0;
}