/*  Q1. Write program to dynamically create an arr of size 6 capable storing 6 integers.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    ptr = (int *)malloc(6*sizeof(int));
    for (int i = 0; i < 6; i++) {
        scanf("%d" , &ptr[i]);
    }
    for (int i = 0; i < 6; i++)   {
        printf("The value of arr[%d] is : %d\n" ,i, ptr[i]);
    }  
}
*/

/*  Q2. Use of array in Q1 , to store 6 intergers entered by user.

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++) {
        printf("Enter arr[%d] element of the aray : " , i);
        scanf("%d" , &ptr[i]);
    }
    
    for (int i = 0; i < 6; i++) {
        printf("The value of arr[%d] element of the aray is %d\n" , i , ptr[i]);
    }
}
*/

/*  Q3. Solve problem 1 using calloc
#include <stdio.h>
#include <stdlib.h>
void main()
{
        int *ptr;
    ptr =(int *) calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++) {
        printf("Enter arr[%d] element of the aray : " , i);
        scanf("%d" , &ptr[i]);
    }
    
    for (int i = 0; i < 6; i++) {
        printf("The value of arr[%d] element of the aray is %d\n" , i , ptr[i]);
    }
}
*/

/*  Q4. Create arr dynamically storing 5 integers, use realloc so that can store 10 integers
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    // ptr = (int *)malloc(5 *sizeof(int));
    ptr = (int *)calloc(5 , sizeof(int));
    for (int i = 0; i < 5; i++) {
        printf("Enter arr[%d] element of the aray : " , i);
        scanf("%d" , &ptr[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("The value of arr[%d] element of the aray is %d\n" , i , ptr[i]);
    }
    ptr = realloc(ptr , 10*sizeof(int));
    for (int i = 0; i < 10; i++) {
        printf("Enter arr[%d] element of the aray : " , i);
        scanf("%d" , &ptr[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        printf("The value of arr[%d] element of the aray is %d\n" , i , ptr[i]);
    }
}
*/

/*  Q5. Create arr of mul of (7 *10 = 70) use realloc to make it store  (7*1 to 7*15)

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr , n1, n2;

    printf("Enter no. to end table of : ");
    scanf("%d" , &n1);
    ptr = (int *)malloc(n1 *sizeof(int));
    for (int i = 0; i < n1; i++)            {
        ptr[i] = 7*(i+1);
        printf("7 x %d = %d\n",i+1 , ptr[i] );
    }
    printf("Re-enter no. to end table of : ");
    scanf("%d" , &n2);
    ptr = realloc(ptr , n2*sizeof(int));
    for (int i = 0; i < n2; i++)            {
        ptr[i] = 7*(i+1);
        printf("7 x %d = %d\n",i+1 , ptr[i]);
    }
}
*/

/*  Q6. Attempt problem 4 using calloc

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    ptr = (int *) calloc(5 , sizeof(int));
    for (int i = 0; i < 5; i++) {
        printf("Enter arr[%d] element of the aray : " , i);
        scanf("%d" , &ptr[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("The value of arr[%d] element of the aray is %d\n" , i , ptr[i]);
    }
    ptr = realloc(ptr , 15*sizeof(int));
    for (int i = 0; i < 10; i++) {
        printf("Enter arr[%d] element of the aray : " , i);
        scanf("%d" , &ptr[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        printf("The value of arr[%d] element of the aray is %d\n" , i , ptr[i]);
    }
}
*/