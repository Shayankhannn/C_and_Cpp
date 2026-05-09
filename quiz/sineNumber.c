/*
    Program: Approximate sine using Taylor series

    Description:
    This program calculates an approximation of sin(x) for a value
    between 0 and 1 (non-inclusive) using the Taylor series expansion:

    sin(x) ≈ x - x^3/3! + x^5/5! - x^7/7!

    Input:
        A double value x such that 0 < x < 1

    Output:
        Approximated sine value of x
*/

#include <stdio.h>

/*
    Computes factorial of a given integer n
    Input: integer n (n >= 1)
    Output: n! as a long integer
*/
long factorial(int n)
{
    long result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

/*
    Computes power x^n
    Input: double x, integer n
    Output: x raised to power n
*/
double power(double x, int n)
{
    double result = 1.0;

    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }

    return result;
}

int main(void)
{
    double x, sine = 0.0;
    int sign = 1;

    printf("Enter a value between 0 and 1 (non-inclusive): ");
    scanf("%lf", &x);

    /* input validation */
    if (x <= 0 || x >= 1)
    {
        printf("Invalid input. Please enter a value between 0 and 1.\n");
        return 0;
    }

    /* Taylor series approximation */
    for (int i = 1; i <= 7; i += 2)
    {
        double term = power(x, i) / factorial(i);
        sine += sign * term;
        sign = -sign;
    }

    printf("Approximate sine of %lf is %lf\n", x, sine);

    return 0;
}