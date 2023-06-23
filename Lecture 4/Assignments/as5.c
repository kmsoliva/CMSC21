#include <stdio.h>

int main() {
    int days, startmonth;

    do {
        printf("Enter the number of days in the month: "); // asks user for the number of days
        scanf("%d", &days);

        if (days < 28 || days > 31) {
            printf("Invalid number of days. Please enter a value between 1 and 31.\n");
        }
    } while (days < 28 || days > 31);

    do {
        printf("Enter the day of the week the month begins (1 = Sun, 7 = Sat): "); // asks user which day of the week the month starts
        scanf("%d", &startmonth);

        if (startmonth < 1 || startmonth > 7) {
            printf("Invalid start day. Please enter a value between 1 and 7.\n");
        }
    } while (startmonth < 1 || startmonth > 7);

    printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n"); // prints the days of the week on top of the calendar

    for (int i = 0; i < startmonth - 1; i++) { // prints spaces before the first day of the month as specified by the user
        printf("     ");
    }

    for (int day = 1; day <= days; day++) { // prints the days in the month
        printf("%-5d", day);

        if ((startmonth + day - 1) % 7 == 0) { // moves to the next line after reaching Saturday
            printf("\n");
        }
    }

    return 0;
}
