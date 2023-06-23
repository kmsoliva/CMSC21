#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50  // max number of reminders
#define MSG_LEN 60     // max length of reminder message

int read_line(char str[], int n);

//the program doesnt run when i tried the code in the book so i simply added a main function for it to run

int main() { 
    char reminders[MAX_REMIND][MSG_LEN + 3]; // provides an array to store the reminders
    char day_str[3], msg_str[MSG_LEN + 1];  // strings for day and msg (message)
    int day, i, j, num_remind = 0;          

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("== No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if (day == 0) // breaks the loop if magenter ang user 0
            break;
        sprintf(day_str, "%2d", day);  // converts day to string (2d) para 01, 02, 03... if one digit ang day
        read_line(msg_str, MSG_LEN);   

        // puts the reminder depending on which day it is
        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;

        // moves the reminders in the array to make room for other reminders
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);

        // stores the day and the message in the reminder[] array
        strcpy(reminders[i], day_str);
        strcpy(reminders[i], msg_str);

        num_remind++;  //increments no of reminders
    }

    // prints the reminders in order of which they are input
    printf("\nDay reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n) { //reads input from user and stores it in given string
    int ch, i = 0;

    while ((ch = getchar()) != '\n') //only stops reading when it encounters \n or kung n is equal to or greater than i na
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i; // returns the no of characters read
}






// wala ga run ang og code from the book mismo huhu yaw q na



