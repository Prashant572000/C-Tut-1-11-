#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakeWaterGun(char y, char c)
{
    //  return 1 if you win , -1 if you lose, and 0 for draw
    if (y == 's' && c == 'g')
        return -1;
    else if (y == 'g' && c == 's')
        return 1;
    if (y == 's' && c == 'w')
        return 1;
    else if (y == 'w' && c == 's')
        return -1;
    if (y == 'w' && c == 'g')
        return 1;
    else if (y == 'g' && c == 'w')
        return -1;
    if (y==c) 
        return 0;
}
void main()
{
    char You, Com;
        srand(time(0));
    int num = rand()%100 + 1;
    if (num <33) 
        Com = 's';
   else if (num >33 && num<66) 
        Com = 'w';
    else
        Com = 'g';
    printf("Enter 's' for snake , 'w' for water and 'g' for gun : ");
    scanf("%c", &You);
    int result = snakeWaterGun(You, Com);
    if (result == -1)
        printf("Com win\n");
    else if (result == 1)
        printf("You win \n");
    else {
        printf("Draw\n");           }
    printf("You chosed %c and Com choose %c\n" , You ,Com);
}