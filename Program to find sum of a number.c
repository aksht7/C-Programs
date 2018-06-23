                                // C program to find sum of its digits of a number
#include <stdio.h>
int main()
{
    long num, sum=0;

    /* Input a number from user */
    printf("Enter any number to find sum of its digit: ");
    scanf("%ld", &num);

    /* Repeat till num becomes 0 */
    while(num!=0)
    {
        /* Find last digit of num and add to sum */
        sum += num % 10;

        /* Remove last digit from num */
        num = num / 10;
    }

    printf("Sum of digits = %ld", sum);

    return 0; // Happy Coding:)
}
