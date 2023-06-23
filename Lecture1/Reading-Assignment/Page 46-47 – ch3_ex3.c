#include <stdio.h>

int main(){
	
	// declares the integer variables
	int num1. denom1, num2, denom2, result_num, result_denom;        

	printf("Enter first fraction: "); // asks the user for the fraction
	scanf("%d/%d", &num1, &denom1);   //user input numerator and denominator gets assigned to num1 and denom1

	printf("Enter second fraction: "); //ask the user for the 2nd fraction
	scanf("%d/%d", &num2, &denom2);    //what the user inputs gets assigned to the variables num2 and denom2
	
	result_num = num1 * denom2 + num2 * denom1; //multiplies the numerators to the denominators of each fraction
	result_denom = denom1 * denom2; // multiplies both denominators for the fraction to have similar denominators

	printf("The sum is %d/%d\n", result_num, result_denom); //prints the results 

	return 0; 
}
