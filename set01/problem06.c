#include <stdio.h> 

// Function to compare three numbers 
void compare(int *a, int *b, int *c) 
{ 
	// Comparing the three numbers 
	if (*a > *b && *a > *c) 
		printf("%d is the largest number.", *a); 
	else if (*b > *a && *b > *c) 
		printf("%d is the largest number.", *b); 
	else
		printf("%d is the largest number.", *c); 
} 

int main() 
{ 
	// Declare three numbers 
	int a, b, c; 
	
	// Ask user to input three numbers 
	printf("Enter three numbers: "); 
	scanf("%d%d%d", &a, &b, &c); 
	
	// Function call to compare the three numbers 
	compare(&a, &b, &c); 
	
	return 0; 
}