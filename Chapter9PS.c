/*  Q1. Create 2d vector using structures
#include <stdio.h>
struct vector {
    int x;
    int y;
};
void main()
{
  struct vector v1,v2;
  v1.x=23;  
  v1.y=63;
  printf("X dim is %d and Y dem is %d" , v1.x , v1.y);  
}
*/

/*  Q2. Write fn sumvector whixh returns sum of 2 vectors passed to it , vector must 2d.
#include <stdio.h>
struct vector   {
    int x;
    int y;      };
struct vector sumvector(struct vector v1 , struct vector v2) {
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}
void main()     {
    struct vector sum;
    struct vector v1 = {3,2};
    struct vector v2 = {4,6};
    sum = sumvector(v1,v2);
    printf("X dim of result is %d and Y dim of result is %d\n" , sum.x , sum.y);
}
*/

//Q3. 20 integer are to be stored in memory what will you prefer Array , Structures   ANS - ARRAY

/*  Q4. Write program to illustrate use of arrow operator(->).
#include <stdio.h>
#include <string.h>
typedef struct student  {
    int roll;
    int Id;
    char name;
} stu;

void main()     {
    stu s1;
    stu *ptr = &s1;
    ptr->roll=101;
    ptr->Id=1;
//    strcpy(ptr->name , "Bap");
    printf("Roll is %d\n" , ptr->roll);
    printf("Roll is %d\n" , s1.roll);
    printf("Id is %d\n" , ptr->Id);
}
*/

/*  Q5. Write program with structure represent complex number.
#include <stdio.h>
typedef struct complex      {
    int a;
    int b;      } com ;
com comlex(com y1, com y2) {
    com sum;
    sum.a=y1.a +y2.a; 
    sum.b=y1.b +y2.b; 
    return sum;
}
void main()         {
    com x1, x2 , sum;
    x1.a=3;
    x1.b=4;
    x2.a=2;
    x2.b=6;
   sum = comlex(x1,x2);
    printf("Sum of x1 is %d and Sum of x2 is %d \n" , sum.a , sum.b);       }
*/

/*  Q6. Create arr of 5 complex no. , and display with display fn, val must be taken i/p from user.

#include <stdio.h>
typedef struct complex {
    int real;
    int imaginary;
} com;
void display(com d1) {
    printf("The value of real part is      : %d\n" , d1.real);
    printf("The value of imaginary part is : %d\n" , d1.imaginary);     }
void main()
{
    com comno[5];
    for (int i = 0; i < 5; i++){
        printf("Enter the %d value of real no.      : ",i+1);
        scanf("%d" , &comno[i].real);

        printf("Enter the %d value of imaginary no. : ",i+1);
        scanf("%d" , &comno[i].imaginary);        
        }
    for (int i = 0; i < 5; i++)         {
        display(comno[i]);          }
}
*/

//Q7. Same as Q6, we should made same program without typedef

/*  Q8. Create structure represents bank accout of customer, what fields did you use.?

#include <stdio.h>
typedef struct Bank {
    int Account_no;
    char Name;
    int IFSC_Code;
} Ban;
void main()
{
    Ban c[3];
    for (int i = 0; i < 3; i++)     {
        printf("Enter Details for Customer %d 's Account no. :\n " , i+1);
        scanf("%d" , &c[i].Account_no);

        printf("Enter Details for Customer %d 's  Name :\n " , i+1);
        scanf("%s" , &c[i].Name);

        printf("Enter Details for Customer %d 's IFSC Code: \n" , i+1);
        scanf("%d" , &c[i].IFSC_Code);             }

    for (int i = 0; i < 3; i++)     {
        printf("The  Customer %d 's Account no. is %d \n " , i+1 , c[i].Account_no);
        printf("The  Customer %d 's Name  is %s : \n" , i+1 , c[i].Name);
        printf("The  Customer %d 's IFSC Code is  %d : \n" , i+1 , c[i].IFSC_Code);
        }   
}
*/

/*  Q9. Write structure capable of storing date, write fn to compare dates. 

#include <stdio.h>
typedef struct date
{
    int year;
    int month;
    int date;
} d;
int datecompare(d d1 , d d2) {
    if (d1.year>d2.year)
        return 1;
    if (d1.year<d2.year)
        return -1;
    if (d1.month>d2.month)
        return 1;
    if (d1.month<d2.month)
        return -1;
    if (d1.date>d2.date)
        return 1;
    if (d1.date<d2.date)
        return -1;
    return 0;           }
void main()
{
    d d1 = {22, 2, 21};
    d d2 = {22, 2, 21};

    printf("Date 1 is : %d/%d/%d\n" , d1.date , d1.month , d1.year);
    printf("Date 1 is : %d/%d/%d\n" , d2.date , d2.month , d2.year);
   int s= datecompare(d1, d2);
    printf("%d" , s);
}
*/