#include <stdio.h> 

int main() 
{ 
    int num1, num2, sum; 
      
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2); 
      
    // Calculate sum 
    sum = num1 + num2; 
      
    // Print the sum 
    printf("Sum of the numbers = %d", sum); 
      
    return 0; 
}