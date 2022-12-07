#include <stdio.h> 

// Function Prototype 
void add(int *a, int *b); 

// Main Function 
int main() 
{ 
	int a, b; 
	
	print("Enter two numbers: "); 
	scanf("%d%d", &a, &b); 
	
	add(&a, &b); 
	printf("Sum = %d", a); 
	
	return 0; 
} 

// Function Definition 
void add(int *a, int *b) 
{ 
	*a = *a + *b; 
}