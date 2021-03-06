/*#include <stdio.h>
void main()
{
    
     int marks1, marks2,marks3, marks4;   // Naive way to create 4 ints
     marks1=23;
     marks2=13;
    int marks[5];
    marks[0]=23;
    marks[1]=53;
    printf("Enter value of marks1 : ");
    scanf("%d" , &marks[0]);
    printf("Enter value of marks2 : ");
    scanf("%d" , &marks[1]);
    printf("Enter value of marks3 : ");
    scanf("%d" , &marks[2]);
    printf("Enter value of marks4 : ");
    scanf("%d" , &marks[3]);
    printf("You have entered %d %d %d %d " , marks[0],marks[1],marks[2],marks[3]); */

    //      Quick Quiz     Create Array 5 I/p and print using loops
    /* int marks[5];                   
    for (int i = 0; i < 5; i++){
        printf("Enter marks for Student %d : \n" , i+1);
        scanf("%d" , &marks[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("Marks for Student %d is %d\n" , i+1 , marks[i]);
    }*/

    /*
//                Array Initialization
    int a[] = {43, 83, 19};
    printf("Val of a[0] is %d \n", a[0]);
    printf("Val of a[1] is %d \n", a[1]);
    printf("Val of a[2] is %d \n\n", a[2]);

    float b[] = {34, 23, 56};
    printf("Val of b[0] is %.1f \n", b[0]);
    printf("Val of b[1] is %.1f \n", b[1]);
    printf("Val of b[2] is %.1f \n\n", b[2]);

    char c[] = {'U', 'S', 'B'};
    printf("Val of b[0] is %c \n", c[0]);
    printf("Val of b[1] is %c \n", c[1]);
    printf("Val of b[2] is %c \n", c[2]);
*/

    /*            Pointer Arithmetic

    // int i = 23;
    // int *ptr = &i;
    char i = 23;
    char *ptr=&i;
    printf("Address of i is %d\n", ptr);
    ptr++;                                                  // ptr = ptr + 1
    printf("Address of i is %d\n", ptr);
*/

    //          Quick quiz

    // char a = 40;
    // char *ptr = &a;
    // printf("Address of ptr is %d\n", ptr);
    // ptr++;
    // ptr++;
    // printf("Address of ptr is %d\n", ptr);

    // int x[] = {98, 45, 87, 12};
    // int *ptr = x;
    // printf("Address of ptr[0] is %d\n", &ptr[0]);
    // printf("Address of ptr[1] is %d\n", &ptr[1]);
    // printf("Difference is %d", &ptr[0] - &ptr[1]);

/*      Accessing array with Pointers
    int marks[4];
    // int *ptr = &marks[0];        // &marks[0] == marks
    int *ptr = marks;
    for (int i = 0; i < 4; i++){
        printf("Enter Value of %dth stdent : \n" , i+1);
        scanf("%d" , ptr);
        ptr++;  }
    for (int i = 0; i < 4; i++){
        printf("The marks of %dth stdent is : %d  \n" , i+1 , marks[i]);
        ptr++;  }   
}
        */

//                           Pass array to fn

/*
#include <stdio.h>
// void printarr(int *ptr , int n) {
void printarr(int *ptr ) {
    for (int i = 0; i < 7; i++)
        {
            // printf("The value of element %d is %d \n" , i+1 , *(ptr+i));         // Method 1
            printf("The value of element %d is %d \n" , i+1 , ptr[i]);           // Method 2
        }    
        ptr[2]=20;          // This  will change in arr of main fn as well
    }    
void main()
{
    int arr[]={12,45,6,56,67,978,75};
    printarr(arr);
    printf("Value of arr[2] is %d" , arr[2]);
}
*/

//                              Multidimension Array
    /*
#include <stdio.h>
void main()
{
    int nstudents=3;
    int nsubjects=5;

    int marks[3][5];

    for (int i = 0; i < nstudents; i++){
        for (int j = 0; j < nsubjects; j++){
    printf("Enter marks of  student %d in subject %d \n", i+1 , j+1);
    scanf("%d" , &marks[i][j]);  }   }
    for (int i = 0; i < nstudents; i++){
        for (int j = 0; j < nsubjects; j++){
    printf("The marks of student %d in subject %d  is %d : \n" , i+1 , j+1, marks[i][j]);   }   }
}
    */

//  Quick Quiz - create 2d arr by take i/p from userwrite fn to print this arr on screen

#include <stdio.h>
void display(int *ptr[3][2]) {
    for (int i = 0; i < 3; i++)     {
        for (int j = 0; j < 2; j++)     {
        //    printf("{%d %d} \n" , *(ptr+i) , *(ptr+j)); 
           printf("{arr[%d][%d] : %d\n" , i , j , ptr[i][j]); 
           ptr[i][j]++;
        }  }
}
void main()
{
    int arr[3][2];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
        printf("Enter element of %d %d array : " , i , j);     
        scanf("%d" , &arr[i][j]);                   }   }
    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < 2; j++){
    //     printf(" %d %d : %d\n" , i , j , arr[i][j]);     
    //                        }   }
        display(&arr);

}