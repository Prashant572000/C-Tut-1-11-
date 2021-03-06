/*  Q1. Write program to print address of var , use address to get value of var.
#include <stdio.h>
void main()
{
    int a=45;
    int *ptr=&a;
    printf("Address of var a is %d\n" , &a);
    printf("Value of var a is %d\n" , *ptr);        // Dereferencing ptr 
    printf("Value of var a is %d\n" , a);         
}
*/

/*  Q2. Write program have var i. print add of i , pass this var to fn , & print its add, Are these addresses same ? Why ?   Ans - No, because we passed value not address

#include <stdio.h>
void printadd(int a) {
    printf("The value of var a is %d\n" , a);
    printf("Address of var a is %d\n" , &a);
}
void main()
{
    int i=4;
    printf("The value of var i is %d\n" , i);
    printadd(i);
    printf("Address of var i is %d\n" , &i);
}
*/

/*  Q3. Write program to change val of a var to 10times of current val, write fn and pass val by reference

#include <stdio.h>
int inc(int *a) {
    return *a *10;
}
void main()
{
    int a=4;
    printf("The val of a before call by reference is %d\n" , a);
    printf("The val of a After call by reference is %d\n" , inc(&a));
}
*/

/*  Q4. Write program using fn to calculate sum&avg of 2no. , use ptr & print val of sum & avg in main()

#include <stdio.h>
void average(int a , int b , int *sum , float *avg) {
    *sum = a+b;
    *avg=(float)*sum/2;
}
void main()
{
    int a=3, b=6 , sum;
    float avg;
    average(a, b, &sum , &avg);
    printf("Sum of a and b is %d\n" , sum);
    printf("Sum of a and b is %.1f\n" , avg);
}
*/

/*  Q5. Write program to print value of a variable i. using 'pointer to pointer' variable
#include <stdio.h>
void main()
{
    int i=3;
    int *ptr=&i;
    int **ptr2=&ptr;
    printf("The value of i is %d\n" , i);
    printf("The value of i is %d\n" , *ptr);
    printf("The value of i is %d\n" , **ptr2);
}
*/

/*  Q6. Solve problem 3 using call by value and verify value doesn't change val of main() var 

#include <stdio.h>
void changeval(int a) {
    a=44;
}
void main()
{
    int a=4;
    changeval(a);       // Here the val of a will not change due to call by value
    printf("The value of a is %d" , a);
}
*/