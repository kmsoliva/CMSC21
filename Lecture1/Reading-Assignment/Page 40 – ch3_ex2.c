#include <stdio.h>

int main(){
	
	// declares the integer and float variables
	int i;     
	float x;   

	// assigns values to the variables i and x
	i = 40;          
	x = 839.21f;     

	// prints the variables with their values
	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	// |%d|    - prints i
	// |%5d|   - prints i with a space of 5 units from the left
	// |%-5d|  - prints i with a space of 5 units from the right
	// |%5.3d| - prints i (wtih value 40) in 3 digits

	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
	// |%10.3f|  - prints x with a space of 10 units from the left with 3 significant digits to the right
	// |%10.3e|  - prints x with an exponent w/ a space of 10 units from left and 3 significant digits to the right
	// |%-10g|   - prints x with a space of 10 units from the right

	return 0; 
}
