#include <iostream>

using namespace std;

int main()
{
	int side1, side2, side3;
	
	// Prompt user for input
	cout << "Please enter the three sides of the triangle: ";
	cin >> side1 >> side2 >> side3;
	
	// Check if triangle is scalene
	if (side1 != side2 && side2 != side3 && side3 != side1)
		cout << "The triangle is scalene." << endl;
	else
		cout << "The triangle is not scalene." << endl;
	
	return 0;
}