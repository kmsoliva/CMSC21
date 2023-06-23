#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[]) {
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars","Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
    int i, j;

    //as said in page 304, this iterates through the command-line argument
    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++) { //compares arguments w the planet names
            if (strcmp(argv[i], planets[j]) == 0) { // if it matches, it prints it as a planet aling with its matching number
                printf("%s is a planet %d\n", argv[i], j + 1);
                break;
            }
        }

        //if there are no matches, then it prints it as not a planet
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}
