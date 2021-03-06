#include <stdio.h>
#include <string.h>
/*                       Create structure
struct emp  {
    int code;
    float salary;
    char name[30];
};
void main()
{   */
    // struct emp e1 ,e3;          // Initialize structure
    //                       Method 1
    // e1.code=100;
    // e1.salary=30004.23;
    // // e1.name ="Prash";   - //    not work
    // strcpy(e1.name , "Prashant is the best");
    // printf("Name is : %s\n" , e1.name);
    // printf("code is : %d\n" , e1.code);
    // printf("salary is : %.2f\n" , e1.salary);

    //              Method 2
//    struct emp  e2 = {100 , 30004.23 , "Prashant"};
    //     printf("Code   is  :   %d\n" , e2.code);
    //     printf("Salary is  :   %f\n" , e2.salary);
    //     printf("Name   is  :   %s\n" , e2.name);

    /*  Quick Quiz - store detailsof 3 emp using created structure above

    printf("Enter code for e1 : ");
    scanf("%d" , &e1.code);
    printf("Enter salary for e1 : ");
    scanf("%f" , &e1.salary);
    printf("Enter name for e1 : ");
    scanf("%s" , e1.name);
    
    printf("Enter code for e2 : ");
    scanf("%d" , &e2.code);
    printf("Enter salary for e2 : ");
    scanf("%f" , &e2.salary);
    printf("Enter name for e2 : ");
    scanf("%s" , e2.name);

    printf("Enter code for e3 : ");
    scanf("%d" , &e3.code);
    printf("Enter salary for e3 : ");
    scanf("%f" , &e3.salary);
    printf("Enter name for e3 : ");
    scanf("%s" , e3.name);
*/

    /*      Create array of structures
    struct emp facebook[100];
      facebook[0].code = 100; 
    facebook[0].salary = 100.05;
    strcpy(facebook[0].name, "Prash");
*/

/*              Pointer to structures

   struct emp e1;                // create e1 struct var
   struct emp  *ptr=&e1;         // create a ptr which points struct emp type var(e1)
    
    (*ptr).code=101;                //  same as (ptr->code = 101;)          Method 1  
    // (*ptr).salary=101.23;           //  same as (ptr->salary = 101.23)      Method 2
    ptr->salary=112.21;
    strcpy((*ptr).name, "Prashant");
    printf("Code is %d\n" , e1.code);    
    printf("Salary is %f\n" , e1.salary);    
    printf("Name is %s\n" , e1.name);    
}
*/

//          Passing structure to function

    // Quick quiz - complete show fn to display content of emp
#include <stdio.h>
#include <string.h>
typedef struct emp  {
    int code;
    float salary;
    char name[30];
} e;

void show(struct emp emp1) {
    printf("Code is %d\n" , emp1.code);
    printf("Salary is %f\n" , emp1.salary);
    printf("Name is %s\n" , emp1.name);
    emp1.code=44;                               //  Didn't change in main()
}
void main()
{
    struct emp e1;
    struct emp *ptr = &e1;
//     ptr->code = 101;
//     ptr->salary = 11.01;
//    strcpy(ptr->name , "Prasant");
    // show(e1);
    // printf("Code is %d\n" , e1.code);

//      Typedef - To create an alias(nick) name for data type
    // e e4;
    // e4.code = 1011;
    // e4.salary = 101.1;
    // strcpy(e4.name , "Best in the world");

//   e e4={100,32.32,"H"};
}
