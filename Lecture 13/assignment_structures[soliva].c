//Kiano Michiko L. Soliva
//202213735

#include <stdio.h>
#include <math.h>

int choice;

struct line{
    struct point{
        float x;
        float y;
    }point1, point2;
};

// gets the slope based on the given formula

float GetSlope(struct line line1){                 
    float slope = (line1.point2.y - line1.point1.y) / (line1.point2.x - line1.point1.x);    
    return slope;
}

// gets the midpoints for the x and y

struct point GetMidpoint(struct line line1){       
    struct point midpoint;
    midpoint.x = (line1.point1.x + line1.point2.x) / 2;    
    midpoint.y = (line1.point1.y + line1.point2.y) / 2;     
    return midpoint;
}

// gets the distance using the given formula 

float GetDistance(struct line line1){                     
    float distance = sqrt(pow(line1.point2.x - line1.point1.x, 2) + pow(line1.point2.y - line1.point1.y, 2));
    return distance;
}

// function that gets and prints the slope intercept

void GetSlopeIntercept(struct line line1){              
    float slope = GetSlope(line1);
    float intercept = line1.point1.y - (slope * line1.point1.x);
    printf("Slope Intercept Form: y = %.2fx + (%.2f)\n", slope, intercept);
}

// main fxn

int main(){
    struct line line1 = {0};                                //creates a var line1 and the start and end points of the line will have x and y coordinates are initially set to 0

    do{
        printf("\nSeparate with spaces.");
        printf("\nEnter the x and y values for point1: ");              
        scanf("%f %f", &line1.point1.x, &line1.point1.y);

        printf("Enter x and y for point2: ");               
        scanf("%f %f", &line1.point2.x, &line1.point2.y);
                   
        printf("Slope: %.2f\n\n", GetSlope(line1));                     // prints slope
    

        struct point midpoint = GetMidpoint(line1); // gets the midpoint to be used in the following print statment
        printf("Midpoint: %.2f %.2f\n\n", midpoint.x, midpoint.y); // prints midpoint
     

        printf("Distance between 2 points: %.2f\n\n", GetDistance(line1)); // y = mx + b where the values of m and b are substituted
        GetSlopeIntercept(line1);

        printf("\nPress 1 to terminate the program or any other key to try again: ");       // gives the user a choice if they want to continue or no
        scanf("%d", &choice);
        printf("\n");

    }while (choice != 1);

    return 0;
}
