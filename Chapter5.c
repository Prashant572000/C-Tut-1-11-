/*
#include <stdio.h>
void display();                                 // fn prototype
void main()
{
    printf("Initialize display fn\n");
    display();                                  // fn call
    printf("display fn finished his work\n");
}
void display() {
    printf("I am display\n");                   // fn definition
}

//                      Quick quiz - display GM GA GN using fn
#include <stdio.h>
void gm() {
    printf("Good Morning \n"); }
void ga() {
    printf("Good Afternoon \n"); }
void gn() {
    printf("Good Night \n"); }
void main()
{
    gm();   
    ga();   
    gn();   }
*/


/*
#include <stdio.h>
// int sum(int a , int b) {        
//     return a+b;                 // return value
// }
void change(int a) {
    a=66;
}
// Parameter vs Argument - In this case a, b are Parameters , 5 , 7 Actul values are Arguments
void main()     {
    int a =44;
    // printf("Sum is %d" ,sum(5,7));          // Function call & print
    printf("The value of a before change is %d\n" , a);
    change(a);
    printf("The value of a After change is  %d\n" , a);
}
*/

/*  Quick Quiz - Find area of suqare

#include <stdio.h>
#include <math.h>
void main()
{
    int side;
    printf("Enter value of side : ");   
    scanf("%d" , &side);
    printf("Vale of area is %.2f" , pow(side , 2));     // Use %f , because pow return double value
}
*/

//                                  Recursion

/*      

#include <stdio.h>
int factorial(int x) {
    if (x==1 || x==0)
        return 1;
    else
        return x*factorial(x-1);    
}
void main()       {
    int n;
    printf("Enter Number of Calculate Factorial : ");
    scanf("%d" , &n);
    printf("The Factorial of %d is %d" , n , factorial(n));
}
*/