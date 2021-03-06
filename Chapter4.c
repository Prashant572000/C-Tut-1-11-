#include <stdio.h>
void main()
{
    /*
    //                  While Loop
    int i;
    scanf("%d", &i);
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    i=22;
    while (i > 10)                  // Infinite loop
    {
        printf("%d\n", i);
        i++;0
    }

//   Quick Quiz - Write program to print natural no. from 10 - 20 , when initial loop i initialize to 0  
   int i=0;
   while (i<=20)        {
       if (i>=10)       {
           printf("%d\n" , i);
       }
       i++;
   }
    */
  
    //    int i=5;
    // printf("The val of i++ is %d\n" , i++);          // It will print 5 then increment (i++ means 1st print then increment)
    //    printf("The val of i is %d\n" , i);              // Now print 6

    //    printf("The val of ++i is %d\n" , ++i);          // It will increment then print 7 (++i means 1st increment then print)
    //    printf("The val of i is %d\n" , i);              // Now print 7

//          Do While Loop  - Executes at least once,until condition T ot F , then check condition
    /*
    int i=0;
    do
    {
        printf("Val of i is %d\n" , i);
        i++;
    } while (i<20);

         Quick Quiz - Write program to print 1st n no. using do while Ex - I/P - 3    O/P - 1 2 3  
    int i=1 , n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
*/
    
//                        For Loop 
    /*
    for (int i = 0; i < 23; i++)
    {
        printf("%d " , i);
    }
    
//      Quick Quiz  Write program to print 1st natural no. using For Loop
    int n1;
    printf("Enter the number : ");
    scanf("%d" , &n1);
    for (int i = 0; i < n1; i++)        {
        printf("%d " , i);
    }
 */ 
    // Ex  Of decrement for loop
    // for (int i = 5 ; i > 0; i--)
    // {
    //     printf("%d " , i);
    // }
    
//       Quick Quiz  Write program to print n natural no. using For Loop in reverse Order
    // int i;
    // printf("Enter no. : ");
    // scanf("%d" , &i);
    // for ( i ; i ; i--)  {
    //     printf("%d\n", i);
    // }

//          Break statement     Using Do while & For
 /*       int i=0;
        do{
            printf("Value of i is %d \n" , i);
            if (i==4)
                break;   
            i++;
        } while (i<10);

       for (int i = 0; i < 100; i++)
       {
           printf("%d " , i);
           if (i==5)
               break;
       }
        */
       
//      Continue Statement
  /*
    int skip = 5, i=0;
    while (i<10)
    {
    i++;
        if (i!=skip)
            continue;
        else
            printf("%d" , i);
    }
        for (int i = 0; i <= 5; i++)
        {
            printf("%d " , i);
            if (i==3){
                continue;
                printf("Nothing will execute after continue stmt");
            }
        }
}
 */       