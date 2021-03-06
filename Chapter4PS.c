/*  Q1. Write program to print multiplication table of given no n.

#include <stdio.h>
void main*()        {
    int n;
    printf("Enter No. to print multiplication table : \n");
    scanf("%d" , &n);
    for (int i = 1; i <= 10; i++)   {
        printf("%d x %d = %d\n" , n , i,  n*i);
    }
}
*/

/*  Q2. Write program to print multiplication table of 10 in reversed order
#include <stdio.h>
void main()      {
    printf("******Multiplication table of 10******\n\n");
    for (int i = 10; i ; i--)       {
        printf("10 x %d = %d\n" , i , 10*i);
    }
}
*/

//   Q3. A Do While loop is Executed - ANS - At least Once
// At least Once , At least twice , At least once

//  Q4. What can be done using 1 type of loop can also done using other 2 types of Loop - T or F  O/p - T

/*  Q5. Write program to sum 1st 10 no. using while loop

#include <stdio.h>
void main()
{
    int sum=0 , i =1;
    while (i<=10)       {
        sum +=i;
        i++;
    }
    printf("Sum of 1st 10 no. is : %d\n" , sum);
}
*/

/*  
// Q6. Write program to implement program 5 using For/Do while loop

//          Using for loop
#include <stdio.h>
void main() {
    int sum =0;
    for (int i = 1; i < 11; i++)        {
        sum +=i;    
    }
        printf("Sum of 1st 10 no. is %d\n" , sum);
}

//          Using Do while

 #include <stdio.h>
 void main()        {
     int sum = 0 , i=1;
     do     {
         sum +=i;
         i++;
     } while (i<11);
        printf("Sum of 1st 10 no. is %d\n" , sum);
 }
*/

/*  Q7. Write program  to calculate sum of no. occuring in multiplication table of 8 (8x1 to 8x10).

#include <stdio.h>
void main()         {
    int n=8 ,sum =0;
    for (int i = 1; i < 11; i++)        {
        printf("Table is %d x %d = %d \n" , n , i , n*i);
        sum += n*i;
    }
    printf("Sum is : %d" , sum);
}
*/

/*  Q8. Write program to calculate factorial of given no.

#include <stdio.h>
void main()     {
    //      factorial(4) = 1*2*3*4  Logic
    int n , factorial=1;
    printf("Enter no. : ");
    scanf("%d" , &n);

    for (int i = 1; i <= n; i++)    {
        factorial =factorial * i;
    }
    printf("Factorial of %d is %d" , n , factorial);
}
*/

/*  
// Q9. Repeat 8 using While loops.

#include <stdio.h>
void main()     {
    int factorial =1 , i=1 , n;
    printf("Enter no. : ");
    scanf("%d" , &n);
    while (i<=n)        {
        factorial *=i;
        i++;
    }
        printf("Factorial of %d is %d" , n , factorial);
}
*/

/* Q10.            Write prohram to check given no. is prime or not using For Loops.

#include <stdio.h>
void main()         {
    // Prime No. - It is no. which is divisible by 1 or itself only
    int n , prime = 1;
    printf("Enter a number to check Prime or not : ");
    scanf("%d" , &n);
    for (int i = 2; i < n; i++){
        if (n%i==0){
            prime = 0;
            break;
        }
    }
        if (prime == 0)
            printf("%d is not a Prime number" , n);
        else
            printf("%d is a Prime number" , n);    
}
*/

/* Q11.            Implement 10 prohram using Other types of Loops.

#include <stdio.h>
void main()     {
    int i = 2, prime = 1, n;
    printf("Enter a number to check Prime or not : ");
    scanf("%d", &n);
    while (i < n)       {
        i++;
        if (n % i == 0)       {
            prime = 0;
            break;
        }
    }
        if (prime == 0)
            printf("%d is not a prime number", n);
        else
            printf("%d is a prime number", n);
}

#include <stdio.h>
void main()
{
    int i=2, prime =1, n;
    printf("Enter a no. to check that is palindrome or not : ");
    scanf("%d" , &n);
    do
    {
        if (n%i == 0) {
            prime = 0;
            break;
        }
        i++;
    } while (i<=n);
        if (prime == 0) 
            printf("%d is not prime number " , n);
         else   
            printf("%d is a prime number " , n);  
}
*/