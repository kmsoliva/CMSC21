//asks the user for an exponent that 2 is to be raised by

#include <stdio.h>

int main() {
    int exponent, result = 1;

    printf("Give an exponent for the integer 2: ");
    scanf("%d", &exponent);

    for (int i = 0; i < exponent; i++) {
        result *= 2;
    }

    printf("2 to the power of %d is %d\n", exponent, result);

    return 0;
}
