/* Which one of the following statements is not equivalent to the other two (assuming that 
the loop bodies are the same)? */


//ANSWER: C because it is the only one that guarantees that the loop is executed at least once





/*

//a) while (i < 10) {...}

#include <stdio.h>

int main(void) {
    int i = 1;

    while (i < 10) {
        printf("%d ", i);
        i *= 2;
    }

    return 0;
}

*/






/*

//b) for (; i < 10;) {...}

#include <stdio.h>

int main(void) {
    int i;

    for (i = 1; i < 10;) {
        printf("%d ", i);
        i *= 2;
    }

    return 0;
}

*/






//c) do {...} while (i < 10); 

#include <stdio.h>

int main(void) {
    int i = 1;

    do {
        printf("%d ", i);
        i *= 2;
    } while (i < 10);

    return 0;
}









