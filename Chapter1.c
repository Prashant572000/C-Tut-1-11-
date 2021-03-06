#include <stdio.h>
int main()
{
    int tom;                                    // tom & Tom r different ,  'A' - a character
    printf("Hello I am learning C\n");
    int a = 4, d = 6;
    int b = 8.5;                                // Not recommended
    // float b = 8.5;
    char c = 'u';
    printf("The value of a is %d\n", a);
    printf("The value of b is %.2f\n", b);
    printf("The value of c is %c\n", c);
    printf("Sum of a and d is %d\n", a + d);    // Quiz to add 2 no. in C
    printf("Sub of a and d is %d\n", a - d);

    /*
    int a, b;
    printf("Enter value of a : \n");
    scanf("%d" , &a);                       // Format specifier - %d,c,f etc || & - Address of 
    printf("Enter value of b : \n");
    scanf("%d" , &b);
    printf("Sum of a and b is %d " , a+b);
    */
    return 0;
}