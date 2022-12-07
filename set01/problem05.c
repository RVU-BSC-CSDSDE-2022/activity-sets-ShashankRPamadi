#include <stdio.h>

// Function to compare three numbers
void compareNumbers(int num1, int num2, int num3)
{
    // If num1 is greater than num2 and num3
    if(num1 > num2 && num1 > num3)
    {
        printf("%d is the greatest number.", num1);
    }

    // If num2 is greater than num1 and num3
    else if(num2 > num1 && num2 > num3)
    {
        printf("%d is the greatest number.", num2);
    }

    // If num3 is greater than num1 and num2
    else if(num3 > num1 && num3 > num2)
    {
        printf("%d is the greatest number.", num3);
    }

    // If all of the numbers are equal
    else
    {
        printf("All the numbers are equal.");
    }
}

// Driver code
int main()
{
    int num1 = 5, num2 = 7, num3 = 5;

    compareNumbers(num1, num2, num3);

    return 0;
}

// Output: 7 is the greatest number.