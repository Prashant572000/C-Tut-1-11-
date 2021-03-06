/*  Q1. Write program to read 3 integers from file.
#include <stdio.h>
void main()
{
    FILE *ptr;
    int n1,n2,n3;
    ptr = fopen("c10_1.txt" , "r");
    fscanf(ptr, "%d %d %d" , &n1 , &n2, &n3);
    printf("n1 is %d\nn2 is %d\nn3 is%d\n" , n1 , n2,n3);
}
*/

/*Q2 Write program to generate mul table of no in text format.make sure file will readable & well formed.

#include <stdio.h>
void main()
{
    FILE *ptr;
    int n;
    printf("Enter the integer you need the table of : ");
    scanf("%d" , &n);
    ptr = fopen("c10_table_pr02.txt" , "w");
    for (int i = 0; i < 10; i++)    {
        fprintf(ptr , "%d x %d = %d \n" , n , i+1, n*(i+1));
    }
    fclose(ptr);
    printf("Successfully generated table of %d to c10_table_pr02.txt \n" , n);
}
*/

/*  Q3. Write program to read text file char by char and write its content twice in seperate file.
#include <stdio.h>
void main()         {
    FILE *ptr1, *ptr2;
    char c;
    ptr1  = fopen("c10_2.txt" , "r");
    ptr2  = fopen("c10_2_1.txt" , "a");
   while (1) {           // This loop is for read all content of file
        c=fgetc(ptr1);
        printf("%c" ,c);
        fputc(c , ptr2);
        fputc(c , ptr2);
        if (c==EOF)
            break;          } 
        fclose(ptr1);
        fclose(ptr2);
}
*/

/*  Q4. Take name & salary at 2 emp as i/p from user and write them to text file in following format. 
#include <stdio.h>
void main()
{
    char ename1[20] , ename2[20];
    int esalary1, esalary2;
    printf("Enter name of employee 1 : ");
    scanf("%s" , ename1);    

    printf("Enter salary of emp1: ");
    scanf("%d" , &esalary1);    
    printf("Enter name of employee 2 : ");
    scanf("%s" , ename2);    

    printf("Enter salary of emp2: ");
    scanf("%d" , &esalary2);    
    
    FILE *ptr;
    ptr = fopen("c10_3.txt" , "w");
    fprintf(ptr ,"%s , %d\n%s , %d\n", ename1 , esalary1 , ename2 , esalary2);
}
*/

/*  Q5. Write a program to modify a filel containing an integer to double it.
#include <stdio.h>
void main()
{
    FILE *ptr;
    int n;
    ptr = fopen("c10_1.txt" , "r");
    fscanf(ptr , "%d" ,  &n);
    fclose(ptr);

    ptr = fopen("c10_1.txt" , "w");
    int n1 = n*2;
    fprintf(ptr , "%d" , n1 );
}
*/