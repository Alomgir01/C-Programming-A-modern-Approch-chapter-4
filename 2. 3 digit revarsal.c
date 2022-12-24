#include <stdio.h>

int main(void)
{
    int num, d1, d2, d3,d4,d5;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    d5=num/10000;
    num%=10000;
    d4=num/1000;
    num%=1000;
    d3 =num / 100;  /*third digit of reversed original number */
    num%= 100;      /*the two-digit number to work with */
    d2 = num/ 10;   /*second digit of reversed original number */
    d1 = num% 10;   /*first digit of reversed original number */

    printf("The reversal is %d%d%d%d%d\n\n", d1, d2, d3,d4,d5);

    return 0;
}
