/*write a program that ask the user to
 enter a two number then prints the number with its revered
Author: Alomgir
 date: 27/2/2022*/


#include <stdio.h>
int main(void)
{
    int num, d1, d2;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    d1 = num % 10;   /*first digit of reversed number */
    d2 = num / 10;   /*second digit of reversed number */

    printf("The reversal is %d%d\n\n", d1, d2);

    return 0;
}


