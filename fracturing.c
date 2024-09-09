#include <stdio.h>
#include <math.h>

// Define PI
#define PI 3.14159


// Function prototypes
double getCoordinate(int index);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Student Name: Robert McGovern
// UCFID: ro751585

int main(int argc, char **argv) {
    // Call the functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0; // Return 0 to allow autograder to work
}

// Function to get specific coordinates based on index
double getCoordinate(int index) {
    double value;
    switch (index) {
        case 1:
            printf("Enter x1: ");
            break;
        case 2:
            printf("Enter x2: ");
            break;
        case 3:
            printf("Enter y1: ");
            break;
        case 4:
            printf("Enter y2: ");
            break;
        default:
            printf("Invalid input\n");
            return 0.0; // Invalid index
    }
    scanf("%lf", &value);
    return value;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;

    // Input points
    x1 = getCoordinate(1);
    x2 = getCoordinate(2);
    y1 = getCoordinate(3);
    y2 = getCoordinate(4);

    // Output the entered points
    printf("Point #1 entered: x1 = %.2lf; x2 = %.2lf\n", x1, x2);
    printf("Point #2 entered: y1 = %.2lf; y2 = %.2lf\n", y1, y2);

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
    
    printf("The perimeter of the
