#include <stdio.h>
#include <math.h>

// Define PI
#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();



int main(int argc, char **argv) {
    // Call the functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0; // Return 0 to allow autograder to work
}

// Function to ask for user input
double askForUserInput() {
    double value;
    scanf("%lf", &value); // Read a double value
    return value;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;

    // Input points
    printf("Enter x1 and y1 for Point #1: ");
    x1 = askForUserInput();
    y1 = askForUserInput();

    printf("Enter x2 and y2 for Point #2: ");
    x2 = askForUserInput();
    y2 = askForUserInput();

    // Output the entered points
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    // Calculate distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

// Function to calculate the perimeter (assuming it's a rectangle)
double calculatePerimeter() {
    double width = calculateWidth();
    double height = calculateHeight();
    double perimeter = 2 * (width + height); // Perimeter formula for a rectangle
    
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    // Return difficulty score
    return 3.0; // Example difficulty level
}

// Function to calculate the area of a rectangle
double calculateArea() {
    double width = calculateWidth();
    double height = calculateHeight();
    double area = width * height; // Area of a rectangle

    printf("The area of the city encompassed by your request is %.2lf\n", area);

    // Return difficulty score
    return 3.0;
}

// Function to calculate the width (difference between x-coordinates)
double calculateWidth() {
    double x1, y1, x2, y2;

    // Input points
    printf("Enter x1 and y1 for Point #1: ");
    x1 = askForUserInput();
    y1 = askForUserInput();

    printf("Enter x2 and y2 for Point #2: ");
    x2 = askForUserInput();
    y2 = askForUserInput();

    // Output the entered points
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    // Calculate width
    double width = fabs(x2 - x1);
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    // Return difficulty score
    return 2.0;
}

// Function to calculate the height (difference between y-coordinates)
double calculateHeight() {
    double x1, y1, x2, y2;

    // Input points
    printf("Enter x1 and y1 for Point #1: ");
    x1 = askForUserInput();
    y1 = askForUserInput();

    printf("Enter x2 and y2 for Point #2: ");
    x2 = askForUserInput();
    y2 = askForUserInput();

    // Output the entered points
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    // Calculate height
    double height = fabs(y2 - y1);
    printf("The height of the city encompassed by your request is %.2lf\n", height);

    // Return difficulty score
    return 2.0;
}
