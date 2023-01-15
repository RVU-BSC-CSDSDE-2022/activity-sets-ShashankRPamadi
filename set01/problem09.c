#include <stdio.h>
#include <math.h>

float input() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    return n;
}

float square_root(float n) {
    return sqrtf(n);
}

void output(float n, float sqrroot) {
    printf("Square root of %f is %f", n, sqrroot);
}

int main() {
    float n = input();
    float sqrroot = square_root(n);
    output(n, sqrroot);
    return 0;
}
