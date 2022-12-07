#include <stdio.h>

int add(int num1, int num2);

int main()
{
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2);

    print("Sum of %d and %d is %d", num1, num2, sum);
    return 0;
}

int add(int num1, int num2)
{
    int res;
    res = num1 + num2;

    return res;
}