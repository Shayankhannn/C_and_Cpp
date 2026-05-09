/*
    Program: Sine and Cosine Table

    Description:
    This program prints a table of sine and cosine values
    for inputs between 0 and 1 (non-inclusive).

    The values are computed using the standard math library.
*/

#include <stdio.h>
#include <math.h>

/*
    Function: print_table

    Description:
    Prints sine and cosine values for numbers between 0 and 1.

    Input:
        none

    Output:
        Prints a formatted table of values
*/
void print_table(void)
{
    double x;

    printf(" x\t\t sin(x)\t\t cos(x)\n");
    printf("---------------------------------------------\n");

    for (x = 0.1; x < 1.0; x += 0.1)
    {
        printf("%.1lf\t\t %.6lf\t %.6lf\n", x, sin(x), cos(x));
    }
}

int main(void)
{
    print_table();
    return 0;
}