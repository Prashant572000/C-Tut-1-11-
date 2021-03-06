/*
#include <stdio.h>
void main() {

    int i=23;                               // i is a variable
//                      Pointer points  to integer
    int *j=&i;                              // j is a pointer, which points to i
    printf("Value of i is %d\n" , i);
    printf("Value of i is %d\n" , *j);
    printf("Value of i is %d\n" , *(&i));
    printf("Address of i is %d\n" , &i);
    printf("Address of i is %d\n" , j);
    printf("Address of j is %d\n" , &j);
    
//                      Pointer points to Pointer
    int **k=&j;
    printf("Address of j is %d\n", &j);
    printf("Address of j is %d\n", k);
    printf("Value of j is %d\n", j);
}
*/

/*                      Call By Value 
#include <stdio.h>
int sum(int a , int b) {
    a=22,b=33;
    return a+b;
}
void main()     {
    int a=2 , b=3;
    printf("Val of a and b is %d %d\n" , a, b);
    printf("Sum  is %d\n" , sum(4,5));
    printf("Val of a and b after fn call is  %d %d\n" , a, b);
}                                           
*/

/*
//                      Call by Reference

#include <stdio.h>
int wrong_swap(int a , int b) {         // Doesn't work
    int temp;
    temp = a;
    a=b;
    b=temp;
    return 0;           }
void swap(int *a , int *b) {
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;        }
void main() {
    int a=4 , b=2;
    printf("Value of a and b before swap is %d %d\n" , a,b);
    wrong_swap(a,b);                                      // Doesn't work due to call by value
    swap(&a,&b);
    printf("Value of a and b is %d %d\n" , a,b);
}
*/