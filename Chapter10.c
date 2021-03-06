#include <stdio.h>
void main()
{
    FILE *ptr;
    int num1, num2;
    /*
    */
//                                  Reading File
    ptr = fopen("c10_1.txt" , "r");             // open file in read mode
    fscanf(ptr , "%d" , &num1);
    printf("Val of num is %d\n" , num1);        

    /*  Quick quiz - Modify program and check file exist or not before open file.
    ptr = fopen("c101.txt" , "r"); 
    if (ptr == NULL)
        printf("This File doesn't exist");
    
    else        {
    fscanf(ptr , "%d" , &num1);
    fclose(ptr);                                      //  used to close file 
    printf("Val of num is %d\n" , num2);        }   
    */

    /*          Writing file
    ptr = fopen("c10_2.txt" , "w");
    int num=65;
    fprintf(ptr , "The number is %d\n" , num);
    fprintf(ptr , " The Legendary Phenom\n" , num);
    */

    /*              getc() and putc   
//              getc()- read file char by char.
    ptr = fopen("c10_3.txt" , "r");
    // char c = fgetc(ptr);
    printf("Val of char is %c\n" , fgetc(ptr));
    printf("Val of char is %c\n" , fgetc(ptr));    
     */

    /*               putc()- write file char by char.
    ptr = fopen("c10_3.txt" , "w");
    putc('Y' , ptr);
    putc('o' , ptr);
    putc('u' , ptr);        */

    /*                  Read full file using fgetc
//                      Method 1    
    ptr = fopen("c10_3.txt" , "r");
    char c= fgetc(ptr);
    
    while (c!=EOF){             // checks until the file ends
        printf("%c" , c);       // print char
        c=getc(ptr);            // get char
    }
//                      Method 2                              
        ptr = fopen("c10_3.txt" , "r");
        char ch;
        while (1)
        {
        ch=fgetc(ptr);
        printf("%c" , ch);
            if (ch==EOF)
                break;
        }
*/
}