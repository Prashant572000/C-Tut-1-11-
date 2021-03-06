/*      
#include <stdio.h>
void main()
{
//          If - else statement
    int a, b;
    printf("Enter a number : ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is Even\n", a);
    else                                             // Optional
        printf("%d is Odd\n", a);

//        Relational Operators
    int age;
    printf("Enter a number : ");
    scanf("%d", &age);

    if (age>90 || age<18)
        printf("You can't drive\n");
    else
        printf("You can drive\n");          
    
// if (age = 50)         //Assignment Operator, Any non 0 val will T in C,It will always execute,until age 50 or not
    if (age == 50)      {
        printf("Half Century\n");
    }

    //          Logical Operators

    int age , Vippass = 0;
    // Vippass =1;
    printf("Enter a number : ");
    scanf("%d", &age);

    if ((age < 70 && age >= 18) || (Vippass == 1))
        printf("You can drive\n");
    else
        printf("You can't drive\n");

    //          Else if
            int num;
        printf("Enter Your number : ");
        scanf("%d" , &num);
        if (num ==1)
            printf("Your number is 1 \n");
        else if (num ==2)
            printf("Your number is 2\n");
        else if (num ==3)
            printf("Your number is 3\n");
        else
            printf("Your number is not 1, 2 , 3 \n");
    
//                            Short Hand If - Else 
    int a;
    printf("Enter a : \n");
    scanf("%d", &a);
    (a < 5) ? printf("A is less than 5") : printf("A is not less than 5");
    } 
      */

//                            Switch statement
/*
    int rating;
    printf("Enter Your rating : \n");
    scanf("%d", &rating);

    switch (rating)     {
    case 1:
        printf("Your rating is 1\n");
        break;
    case 2:
        printf("Your rating is 2\n");
        break;

    case 3:
        printf("Your rating is 3\n");
        break;

    case 4:
        printf("Your rating is 4\n");
        break;

    case 5:
        printf("Your rating is 5\n");
        break;

    default:
        printf("Invalid Rating");
        break;
}
}
*/

//          Quick Quiz
/*
#include <stdio.h>
void main()         {
    int marks;
    printf("Enter Your Marks : ");
    scanf("%d" , &marks);

    if (marks<=100 && marks >= 90)
        printf("Your Grade is A");
   else if (marks<=90 && marks >= 80)
        printf("Your Grade is B");
   else if (marks<=80 && marks >= 70)
        printf("Your Grade is C");
   else 
        printf("Fail");
}
*/