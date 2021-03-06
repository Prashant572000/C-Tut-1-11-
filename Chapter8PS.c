/*  Q1. Which is used to read a multi word string. - gets,puts,printf,scanf
    Ans - gets()
*/

/*  Q2. Write prgram to take str as i/p from user using %c,%s, confirm that str are equal from user
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[22];
    char str2[12];
    char c;
    int i=0;

    printf("Enter str1 : ");
    scanf("%s", &str1);
    printf("Enter str2 : ");
    while (c!='\n') {
    fflush(stdin);
    scanf("%c", &c);
    str2[i] = c;
    i++;                }
    str2[i]='\0';
    printf("str1 is %s\n" , str1);
    printf("str2 is %s\n" , str2);

    if (strcmp(str1 , str2) ==0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
}
*/

/*  Q3. Write your own version of strlen fn from string.h

#include <stdio.h>
int stlen(char *str)
{
    char *ptr = str;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
void main()
{
    char st[] = "Prashbhai";
    int l = stlen(st);
    printf("Length of st is %d", l);
}
*/

/*  Q4. Write fn slice to slice str. it should change original str such that it now sliced str. take m and n as start & end position for slice.

#include <stdio.h>
void slice(char *st , int m , int n) {
    int i=0;
    while ((m+i)<n)   {
        st[i]=st[i+m];
        i++;          
    }
    st[i]='\0';
}
void main()
{
    char st[] = "Prashkhsfhdfhskjf";
    slice(st , 6, 15);
    printf("%s" , st);
}
*/

/*  Q5.  Write own fn of strcpy in <string.h>
#include <stdio.h>
void stcpy(char st2[] , char st1[]) {
    int i=0 , j=0;
    while (st1[i]!='\0')    {
        st2[j]=st1[i];
        i++;
        j++;    }
}
void main()
{
    char st1[]= "Prashant";
    // char st1[]= {'H' , 'a' , 'r' , 'r' , 'y' , '\0'};
    char st2[32];
    printf("st1 is %s\n" , st1);
    stcpy(st2 , st1); 
    printf("Now st2 is %s\n" , st2);  
}
*/

/*  Q6. Write program to encrypt str by adding 1 to ASCII value of its characters.
#include <stdio.h>
void encrypt(char *c) {
    char *ptr=c;
    while (*ptr!='\0')  {
        *ptr=*ptr+1;        // by adding 1 value, we can encrypt
        *ptr++;
    }
    
}
void main()
{
    char c[]="Prash";
    encrypt(c);
    printf("Encrypted string is %s" , c);
}
*/

/*  Q7. Write program to decrypt str encrypted using encrypt fn in problem 6.

#include <stdio.h>
void decrypt(char *c) {
    char *ptr=c;
    while (*ptr!='\0') {
    *ptr=*ptr-1;                    // by subtract 1 value, we can decrypt
        ptr++;
    }
}
void main()
{
    char c[]="Qsbti";
    decrypt(c);   
    printf("Decrypted str is %s" , c);
}
*/

/*  Q8. Write program to count occurance of given char in string.

#include <stdio.h>
int occurance(char st[] , char c) {
    char *ptr=st;
    int count=0;
    while (*ptr!='\0')  {
        if (*ptr==c)    {
            count++;        }
        ptr++;
    }
    return count;           }
void main()
{
    char str[] ="PrashantKumar";
    int l=occurance(str , 'a');
    printf("Occurance = %d", l);
}
*/

/*  Q9. Write program to check given char is present in str or mot

#include <stdio.h>
void pres(char *st , char c) {
    char *ptr=st;
    int i=0;
    while (*ptr!='\0')   {
        if(*ptr==c) { 
            printf("%c character Present in string" , c);
            break;
        }
        else
             ptr++;
    }
}
void main()
{
    char str[] = "Prashant bhai";
    pres(str , 'P');   
    
}
*/