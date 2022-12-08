#include <stdio.h>

int main()
{
    int n, I;
    float num, sum = 0.0;

    print("Enter the number of elements: ");
    scanf("%d", &n);

    for(i=0; i<n; ++i)
    {
        printf("Enter Number%d: ",i+1);
        scanf("%f", &num);

        sum += num;
    }

    printf("Sum = %.2f", sum);
    return 0;
}