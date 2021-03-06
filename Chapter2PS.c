/*   Q1.  Which of the following is invalid in C
    1.  int a; b = a;                   INVALID
    2.  int v = 3^3;                    VALID (but not return 9 , It return 0)
    3.  char dt= '21 Dec 2020';         INVALID (Only 1 char allowed)

#include <stdio.h>
int main()
{
    // int a;      b=a;        // Invalid
    // int a; int b=a;         // Valid
    // int v=  3^3;            // Valid
    // char c='24';            // Invalid
    return 0;
}
*/

/*      Q2.   What data type will 3.0/8 - 2
Ans - It will return double(float), If we define decimal no. without define in C, so it treat no. as double  .  
*/

/*
        Q3.     Write program to check if no. is divisile by 97 or not.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : \n");
    scanf("%d" , &num);
    printf("Divisibility Test Returns %d\n" , num%97);
    return 0;
}
*/

/*      Q4. Explain step by step evaluation of 3* x/y -z +k , Where x=z y=3 , z=3 k=1 

#include <stdio.h>
int main()
{
    int  x = 2 , y = 3, z=3 , k=1;
    int result = 3 * x / y - z + k ;

    // 6 / 3 - 3 + 1
    // 2  - 3 + 1
    // 0
    printf("Answer is %d", result); 
    return 0;
}
*/

/*  Q5.  3.0 +1 Will be :

a. Interger
b. Floating Point Number            
c. Character

Ans - b. Floating Point Number
*/