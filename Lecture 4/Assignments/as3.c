//convert item 1 into an equivalent for statement which prints 2^0 - 2^7

#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 128; i *= 2) {
        printf("%d ", i);
    }

    return 0;
}
