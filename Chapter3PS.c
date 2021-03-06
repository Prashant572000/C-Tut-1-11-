/*
    Q1. What will be O/P of this program

#include <stdio.h>
void main()
{
    int a = 10;
    if (a = 11)                         // Curly braces {} r optional , if inside if condition only 1 stmt
        printf("I am 11");
    else
        printf("I am not 11");
}
*/

/* Q2. Write program to find student is pass or fail, if total 40%, and at least 33% to each subject to  pass, Assume subj, take marks as i/p from user.

#include <stdio.h>
void main()
{
    int physics, Chemistry, Maths; float total;
    printf("Enter Physics marks : \n");
    scanf("%d", &physics);
    
    printf("Enter Chemistrys marks : \n");
    scanf("%d", &Chemistry);

    printf("Enter Maths marks : \n");
    scanf("%d", &Maths);
    
    total = ( physics + Chemistry + Maths ) / 3;

    if (total<40 || physics <33 || Chemistry < 33 || Maths < 33)
        printf("Your total Percentage is %.2f and you are Fail \n" , total);
        // printf("Your total Percentage is %d and you are Fail \n" , (int )total);    // TypeCasting
    else
        printf("Your total Percentage is %.2f and you are Pass \n" , total);
}
*/

/* Q3. Calculate Income Tax paid By emp to Gov as per Condition
          Income          Tax
        2.5L - 5.0L       5%
        5.0L - 10.0L      20%
         Above 10.0L      30%

#include <stdio.h>
void main()
{
    float tax = 0, income;
    printf("Enter Your Income : \n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000) 
        tax = tax + 0.05 * (income - 250000);

    if (income >= 500000 && income <= 1000000) 
        tax = tax + 0.20 * (income - 500000);
    
    if (income >= 1000000) 
        tax = tax + 0.30 * (income - 1000000);
    
    printf("Your net Income tax to be paid by 26th of the month is %.2f \n", tax);
}
*/

/* Q4. Write program to find a year entered by user is Leap year or not.
#include <stdio.h>
void main()         {
    int year;
    printf("Enter Year : ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
        printf("%d is Leap Year", year);
    else
        printf("%d is Not a Leap Year", year);
}
*/

/* Q5. Write program to wheter Character entered By User is Lowercase Or Not .
#include <stdio.h>
void main()         {
    char c;
    // 97 - 122 = a-z       ASCII values
    printf("Enter a Character : ");
    scanf("%c", &c);
    if (c >= 97 && c <= 122)
        printf("%c is Lowercase" , c);
    else
        printf("%c is Not Lowercase" , c);
}
*/

/* Q6. Write program to Find greatest Of 4 no. entered by user.

#include <stdio.h>
void main()         {
    int n1, n2, n3, n4;
    printf("Enter n1 : ");
    scanf("%d", &n1);

    printf("Enter n2 : ");
    scanf("%d", &n2);

    printf("Enter n3 : ");
    scanf("%d", &n3);

    printf("Enter n4 : ");
    scanf("%d", &n4);
    if (n1 > n2 && n1 > n3 && n1 > n4)
        printf("Number 1 %d is Greatest \n", n1);

    else if (n2 > n1 && n2 > n3 && n2 > n4)
        printf("Number 2 %d is Greatest \n", n2);

    else if (n3 > n1 && n3 > n2 && n3 > n4)
        printf("Number 3 %d is Greatest \n", n3);
    
    else if (n4 > n1 && n4 > n2 && n4 > n3)
        printf("\nNumber 4 %d is Greatest \n", n4);
}
*/