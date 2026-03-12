#include <stdio.h>
int main()
{
    int num, digit, count = 0, oddsum = 0;

    printf("enter a number :");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;

        count++;

        if (digit % 2 != 0)
        {
            oddsum += digit;
        }

        num = num / 10;
    }
    printf("digit = %d\n ", count);
    printf("summation of odds = %d\n ", oddsum);

    return 0;
}