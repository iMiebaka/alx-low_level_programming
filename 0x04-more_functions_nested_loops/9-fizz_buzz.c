
#include "main.h"
#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always 0
 */

int main(void)
{
        int start = 1;
        int end = 100;
        for (start = 0; start < end; start++)
        {
                if (start % 3 == 0 && start % 5 == 0)
                {
                        printf("FizzBuzz");
                }
                else if (start % 5 == 0)
                {
                        printf("Buzz");
                }
                else if (start % 3 == 0)
                {
                        printf("Fizz");
                }
                else
                {
                        printf("%d ", i);
                }
         }

        return 0;
}
