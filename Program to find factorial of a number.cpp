                                           // C program to calculate factorial of a number
#include <stdio.h>
int main()
{
    int i, num;
     long fact=1;

    /* Input number from user */
    printf("Enter any number to calculate factorial: ");
    scanf("%d", &num);

    /* Run loop from 1 to num */
    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d = %ld", num, fact);
    return 0;
}
