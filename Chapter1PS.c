/* Q1. Write c program to calculate area of rectangle.
 a. Using hard coded i/p
b. Using  i/p entered by user.

#include <stdio.h>
void main()
{ //          a
    int length=3 , breadth=5;
    int area= length*breadth;
    printf("Area of this rectangle is %d\n" , area);

             b
    int length, breadth;
    printf("Enter length of rectangle : \n ");
    scanf("%d", &length);
    printf("Enter breadth of rectangle : \n ");
    scanf("%d", &breadth);
    printf("Area of this rectangle is %d\n", length * breadth);
}
*/



/* Q2. Write c program to calculate area of circle and calculate volume of cylinder given its radius and height.
#include <stdio.h>
int main()
{
    int radius = 3;
    float pi = 3.14;
    // printf("Area of this circle is %f\n" , pi*radius*radius");
    int height = 4;
    printf("Volume of this cylinder is %f\n", pi * radius * radius * height);
    return 0;
}
*/



/* Q3. Write c program to convert celcius to farenhite.

#include <stdio.h>
int main()
{
    float celcius =37 , far;
    far= (celcius * 9/5) + 32;
    printf("The value of this celcius temprature in Farhenhite is %f\n" , far);
    return 0;
}
*/

/* Q4. Write c program to calculate simple interest for set of val represent principal, no. of years , rate of interest.

#include <stdio.h>
int main()
{
    int principal =100, rate=4, years=1;
    int simpleInterest = (principal * rate * years)/100;
    printf("Simple interest is %d" , simpleInterest);   
    return 0;
    }
*/