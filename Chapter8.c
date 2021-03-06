#include <stdio.h>
#include <string.h>
void main()
{
    /*      Initialize string(Null terminated char array)
    // char str[] = {'P' , 'r' , 'a' , 's' , 'h' , '\0'};      //Method 1   
    */
    
    char str[] = "Prash";                                   //Method 2
    char *ptr=str;

    //  Quick quiz - Create str using "" & print using loop   
    while (*ptr!= '\0')
    {
        printf("%c" , *ptr);
        ptr++;
    }
   
/*     easy way to  print string     
    // char str[]="Prash Sir";          // Method 1
    // printf("%s" , str);
   char *ptr="Prash Sir";             // Method 2
    printf("%s" , ptr);     */

/*      Taking str i/p
    char st[23];
    printf("Enter Your name : " );
    scanf("%s" , st);                   // No need for & , because st already add of st[0]
    printf("Your name is %s" , st);
*/

/*  gets() and puts()
  gets()- is fn used to store multi word string(With spacees) 
    char str[40];
    printf("Enter Your name : ");
    gets(str);
    // printf("Your name is %s\n" , str);

//  putc()- is fn used to print st , and places cursor on next line
    puts(str);
*/

/*  Difference b/w 2 init methods

    // char arr[] = "Papa";         // If create arr , can't reinitialize value in array
    // arr = "Beta";

    char *arr = "Papa";             // If create char ptr , can reinitialize value in array
    arr="Baap";         
    printf("%s" , arr);
*/

/*  Library fns for strings
*/
  //    strlen -  count no. of char excluding null character

    // char *str="Prash";
    // printf("Lenght of str is %d" , strlen(str));    }

  //    strcpy -   used to copy content of 2nd str into 1st str

    // char *str1= "This";
    // char str2[35];
    // strcpy(str2 , str1);
    // printf("Now str2 is : %s", str2);

  //    strcat -  used to concatenate 2 strings
        // char str1[19] = "Hello WWF ";
        // // char str2[10] = "Champion";
        // char *str2 = "Champion";
        // printf("Now the str1 is : %s  " ,str1);
  
  //    strcmp -  used to compare 2 strs , for more read notes

        // char st1[] ="zello";
        // char *st2= "zello";
        // int v= strcmp(st1,st2);
        // printf("Value is %d" , v);
}