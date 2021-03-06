/*  Q1.  Create array of 10 no., verify using ptr arithmetic that ptr+2 , points to 3rd element of array where ptr is pointer pointing to the 1st element of array. 
#include <stdio.h>
void main()
{
    int array[10] = {1,2,3,4,5};
    int *ptr=array;
    // printf("Address of array[2] is %d\n" , ptr+2);
    // printf("Address of array[2] is %d\n" , &array[2]);
    if (ptr+2 == &array[2])
        printf("These are pointed to the same memory location");
    else
        printf("These do not pointed to the same memory location");         }
*/

/*  Q2. If S[3] is 1D array of int , Is *(s +3) referes to 3rd element:
Ans - False, because *(s+2) refers to 3rd element, because index of array starts with 0 
*/

/*  Q3.  Write program to create array of 10 integers , store multiplication table of 5

#include <stdio.h>
void main()
{
    
    int mul[10] , n;
    printf("Enter the value you want to table of : ");
    scanf("%d" , &n);
    for (int i = 0; i < 10; i++)
    {
        mul[i] = n*(i+1);
        printf("%d x %d = %d\n" , n , i+1 , mul[i]);
    }   
}
*/

/*  Q5. Write program and fn which reverse arr passed to it.

#include <stdio.h>
int revarr(int *arr , int n) {
    // 1 2 3 4 5 
    // 5 2 3 4 1
    // 5 4 3 2 1       
    int temp;
    for (int i = 0; i <(n/2); i++)
    {
    temp = arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1] = temp;     }   
}
void main()
{
    int arr[] = {1,2,3,4,5,6,7};
    revarr(arr , 7);
    for (int i = 0; i < 7; i++){
    printf("%d " , arr[i]);
    }
}
*/

/*  Q6. Write program contain fn which count no. of +ve integers in array.

#include <stdio.h>
int counfn(int arr[], int n)
{
    int no_of_posiInt = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] > 0) {
            no_of_posiInt = no_of_posiInt + (i + 1); }
        else {
            continue;   }
    }

    return no_of_posiInt;
}
void main()
{
    int arr[] = {-23, 45, -43, 23, -34};
    printf("Positive integers in an array are %d ", counfn(arr, 5));
}
*/

/*  Q7. Create an array of size 3x10 contain mul table of 2,7,9
#include <stdio.h>
void printtable(int *multable , int num , int n) {
    printf("The multiplication table of %d is \n" , num);
    for (int i = 0; i < n; i++)    {        // 2nd method
        multable[i] = num*(i+1);   }
    for (int i = 0; i < n; i++)    {
            printf("%d x %d = %d\n" ,num , i+1 , multable[i]);    }
    printf("**********************************************\n\n");
}
void main()
{
    int multable[3][10];
    printtable(multable[0] , 2 , 10);
    printtable(multable[1] , 7 , 10);
    printtable(multable[2] , 9 , 10);
    // for (int i = 0; i < 10; i++)    {        // 1st method
    //     multable[0][i] = 2*(i+1);   }
    // for (int i = 0; i < 10; i++)    {
    //         printf("2 x %d = %d\n" , i+1 , multable[0] [i]);    }

    // for (int i = 0; i < 10; i++)    {
    //     multable[0][i] = 7*(i+1);   }
    // for (int i = 0; i < 10; i++)    {
    //         printf("7 x %d = %d\n" , i+1 , multable[0] [i]);    }

    // for (int i = 0; i < 10; i++)    {
    //     multable[0][i] = 9*(i+1);   }
    // for (int i = 0; i < 10; i++)    {
    //         printf("9 x %d = %d\n" , i+1 , multable[0] [i]);    }       
}
*/

/*  Q7. Repeat program 7 using i/p given by user 

#include <stdio.h>
void main()
{
  int n , m;
  for (int i = 0; i < m; i++)    {
  int arr[m][n];
  printf("Enter the no. to print table of : ");
  scanf("%d" , &m);
  printf("Enter end no. till  to print table of : ");
  scanf("%d" , &n);
         for (int j = 0; j < n; j++)   {
             arr[i][j] = m*(j+1);       }
     }
}
*/

/*  Q9. Create a 3D array and print address of its elements in increase order.  

#include <stdio.h>
void main()
{
    int arr[2][3][4];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                printf("Address of arr[%d][%d][%d] element is %d\n" , i, j, k , &(arr[i][j][k]));
            }
        }
    }
}
*/