#include <stdio.h>

int main(void)
{
    int i;

    i = 1;

    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }

    return 0;
}


//its output will be "1 2 4 8 16 32 64 128"
//in other words, 2^0, 2^1, 2^2,...,2^7