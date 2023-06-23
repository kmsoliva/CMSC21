#include <stdio.h>

int main(){
	
	// declares the integer and float variables
	int i, j;     
	float x, y;   

	// assigns values to the variables i, j, x, and y
	i = 10;       
	j = 20;       
	x = 43.2892f; //f in the end of the value signifies that it is a float val
	y = 5527.0f;  

	// prints the variables w their values
	//%d is for integers and %f is for float values
	printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

	// the next line terminates the program
	return 0; 
}
