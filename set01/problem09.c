#include <stdio.h>
#include <math.h>

int main()
{
    float number, initial_guess, new_guess;
    print("Enter a number: ");
    scanf("%f", &number);
    initial_guess = number/2;

    /* Use the Babylonian method to calculate the square root of a given number */
    do
    {
        new_guess = 0.5 * (initial_guess + (number/initial_guess));
        initial_guess = new_guess;
    }while (fabs(new_guess-initial_guess) > 0.00001);

    printf("Square root of %.2f = %.2f", number, new_guess);

    return 0;
}