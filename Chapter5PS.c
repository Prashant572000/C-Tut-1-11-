/*  Q1. Write program using fn to find average of 3 no.

#include <stdio.h>
float avg(int a , int b , int c) {
    return (float)(a+b+c)/3;
}
void main()         {
    printf("The average of Given no. is %.2f" , avg(41,61,8));
}
*/

/*  Q2. Write a fn to convert celcius to farenhite

#include <stdio.h>
float farenhite(int a) {
   float far= (a * 9/5) + 32;
    return far;
}
void main()
{
    int celcius = 37;
    printf("The %d degree celcius is equal to %.3f farenhite " , celcius , farenhite(celcius));
}
*/

/* Q3.Write fn to calculate force of attraction on body of mass m exerted by earth. F = Mass(m) * g(9.8)

#include <stdio.h>
float force(float mass) {
    return mass*9.8;
}
void main()
{
    float m;
    printf("Enter The value of Mass kgs : ");
    scanf("%f" , &m);
    printf("The value of Force is %.2f newton" , force(m));

}
*/

/*  Q4. Write program using Recursion to calculate n elements of fibonacci series.

#include <stdio.h>
int fib(int a)
{
    if (a == 0)
        return 0;
    else if (a == 1 || a == 2)
        return a - 1;
    else
        return fib(a - 1) + fib(a - 2);
}
void main()
{
    int n;
    printf("Enter val of calculate fibonacci series : ");
    scanf("%d", &n);
    printf("The fibonacci of %d is %d", n, fib(n));
}
*/

/*  Q5. What will O/p - printf("%d %d %d\n" , a , ++a , a++);
#include <stdio.h>
void main()
{
    int a=3;
    printf("%d %d %d\n" , a , ++a , a++);   
}
// When we pass arguments to printf fn , they passed and printf takes arguments from right to left
*/

/*  Q6.  Write recursive fn to calculate sum of 1st natural no.
#include <stdio.h>
int addnum(int n)
{
    if (n != 0)
        return n + addnum(n - 1);
    else
        return n;
}
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Sum = %d ", addnum(n));
}
*/

/*  Q7.  Write program using fn to print following pattern .
#include <stdio.h>
void printstar(int a)
{
    for (int i = 0; i <= a; i++)        { // for row
        for (int j = 0; j < i; j++)     { // for col
            printf("*");
        }
        printf(" \n");
    }
}
void main()
{
    int n;
    printf("Enter number to print star pattern : ");
    scanf("%d", &n);
    printstar(n);
}
*/