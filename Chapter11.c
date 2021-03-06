#include <stdio.h>
#include <stdlib.h>
void main()
{
//      malloc fn - returns void pointer  , intialize all memory block to default garbage value . 
/*ptr=malloc(6 * 4);  // 6*4(bytes)allocate memory integers(but size depends on architecture) Wrong 
    int *ptr;               // ptr is integer type pointer
    ptr =(int *) malloc(6 * sizeof(int));  // typecasting void(malloc returns) to int, sizeof returns size of int

    for (int i = 0; i < 6; i++)     {
        printf("Enter value of %d element is : " ,i );
        scanf("%d" , &ptr[i]);          }
    
    for (int i = 0; i < 6; i++)         {
        printf("The value of %d element is %d \n" ,i , ptr[i]  );        }
*/

/*  Quick Quiz- Write program to create dynamic array of 5 floats using malloc()
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));
        for (int i = 0; i < 5; i++) {
            printf("Enter value of %d element is : " , i);
            scanf("%f" , &ptr[i]);      }
        for (int i = 0; i < 5; i++) {
            printf("The value of %d element is %.1f : \n" , i , ptr[i]);
        }        */

/*      calloc fn - returns void pointer , intialize all memory block to default value 0.
    int *ptr;
    
    ptr = (int *)calloc(5 , sizeof(int));
    
    for (int i = 0; i < 5; i++)     {
        printf("Enter value of %d element is : " , i);
        scanf("%d" , &ptr[i]);
    }
    
    for (int i = 0; i < 5; i++)     {
        printf("The value of %d element is : %d\n" , i , ptr[i]);
    }           */

/*   Quick Quiz - write program to create array of size n using calloc where n is entered by user
    int *ptr , n;
    printf("Enter how many size of array you want to allocate : ");
    scanf("%d" , &n);

    // ptr = (int *)calloc(n , sizeof(int));        // for calloc
    ptr = (int *)malloc(n * sizeof(int));           // for malloc
    for (int i = 0; i < n; i++){
        printf("Enter value of %d element of array : " , i);
        scanf("%d" , &ptr[i]);
    }
    
    for (int i = 0; i < n; i++){
        printf("The value of %d element of array is : %d\n" , i , ptr[i]);
    }
*/    
//  free fn - used to deallocate memory     Syntax - free(ptr);
    
/*      Quick Quiz - Write program to demonstrate usage of free() with malloc(). 
    int *ptr;
    for (int i = 0; i < 500; i++) {
        ptr = malloc(500*sizeof(int));
        printf("Enter value of %d element of array : " , i);
        scanf("%d" , &ptr[i]);
        free(ptr);
    }
    for (int i = 0; i < 500; i++) {
        printf("Enter value of %d element of array is %d\n" , i , ptr[i]);
    }
*/

//   realloc - reallocate memory
/*
    int *ptr;
    ptr = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)     {
        printf("Enter the value of %d element : " , i);
        scanf("%d" , &ptr[i]);
    }

    for (int i = 0; i < 5; i++)     {
        printf("The value of %d element is:  %d\n" , i , ptr[i]);           }

    //      Realloc memory using realloc()
    ptr = realloc(ptr , 10 *sizeof(int));
    for (int i = 0; i < 10; i++)     {
        printf("Enter the value of %d element : " , i);
        scanf("%d" , &ptr[i]);
    }

    for (int i = 0; i < 10; i++)     {
        printf("The value of %d element is:  %d\n" , i , ptr[i]);           }
*/
}