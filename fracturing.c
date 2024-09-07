//********************************************************
// fracturing.c
// Author: Gilberto Jimenez Perez
// UCF ID: 5683855
// Due Date: 9/8/24
// Class: COP 3223, Professor Parra
// Purpose: This program asks the user to input the coordinates
// of two points in which it would later calculate the distance,
// between the two points and then calculate perimeter, area, 
// width, and height of the city based on those two points.
// Input: x and y position of point 1 and 2
//
// Output: A message showing the calculations for the distance
// of the two points as well as the perimeter, area, width, and
// height of a city based of the two points inputed
//
// Pre-condition: The city is not larger than the two points
// inputed by the user and is strictly in a circular shape.
//
// Post-condition: The city's measurements, which include the
// perimeter, area, width, and height, as well as the distance
// between the two points will be shown to the user.
// //********************************************************

// Declaring the libraries that I will use throughout code.
#include <stdio.h>
#include <math.h>

#define PI 3.14159


// Function that takes user input for x coordinate of first point
int inputMessage1 () {
    int point1 = 0;
    printf("Enter your x1 value: ");
         scanf(" %d/n", &point1);

    return point1;
}


// Function that takes user input for y coordinate of first point
int inputMessage2 () {
    int point2 = 0;
    printf("Enter your y1 value: ");
         scanf(" %d/n", &point2);

    return point2;
}


// Function that takes user input for x coordinate of second point
int inputMessage3 () {
    int point3 = 0;
    printf("Enter your x2 value: ");
         scanf(" %d/n", &point3);

    return point3;
}


// Function that takes user input for y coordinate of second point
int inputMessage4 () {
    int point4 = 0;
    printf("Enter your y2 value: ");
         scanf(" %d/n", &point4);

    return point4;
}


// A function that shows the user the coordinates they inputed for the points
void outputMessage (int point1, int point2, int point3, int point4) {

   printf("- Point #1 entered: x1 = %d; y1 = %d \n- Point #2 entered: x2 = %d; y2 = %d \n", point1, point2, point3, point4);

   
}


// Calculates the distance between the two points the user inputs.
double length() {
    
    // A whole bunch of variables to set up the equation and get the inputs from user into variables
    double distance = 0;
    double calculation1 = 0;
    double calculation2 = 0;
    double calculation3 = 0;

    int pointX1 = inputMessage1 ();
    int pointY1 = inputMessage2 ();
    int pointX2 = inputMessage3 ();
    int pointY2 = inputMessage4 ();

    int totalX = (pointX2 - pointX1);
    int totalY = (pointY2 - pointY1);

    // Math to calculate distance between the two points
        calculation1 = pow(totalX, 2);
        calculation2 = pow(totalY, 2);
        calculation3 = calculation1 + calculation2;

        distance = sqrt(calculation3);
    
    // Calling the repeating output message so it could easily be included in other functions.
    outputMessage (pointX1, pointY1, pointX2, pointY2);

    return distance;

}


// Outputs the distance between the two points to the user.
double calculateDistance () {

    printf("- The distance between the two points is %lf\n", length ());

    return 2.828427;

}


// Calculates the perimeter of the circle using the distance calculated before
double calculatePerimeter () {

    double calculation = length () * PI;

    printf("- The perimeter of the city encompassed by your request is %lf\n", calculation);


    return 1.7;

}


// Calculates the Area of the circle using the distance from a previous function.
double calculateArea () {
    double calculation = length () / 2 ;
    double calculation2 = pow(calculation, 2) * PI;

        printf("- The area of the city encompassed by your request is %lf\n", calculation2);

    return 1.4;

}


// Outputs the Width of the circle using the distance from a previous function. (Same as distance between two points)
double calculateWidth () {
    
    printf("- The width of the city encompassed by your request is %lf\n", length ());

return 1.0;

}


// Calculates the height of the circle, or radius, by using the distance found from a previous function.
double calculateHeight () {
    double calculation = length () / 2;

    printf("- The height of the city encompassed by your request is %lf\n", calculation);

return 1.1;

}


// Function that calls main functions into play
int main (int argc, char **argv) {

    calculateDistance ();
    calculatePerimeter ();
    calculateArea ();
    calculateWidth ();
    calculateHeight ();
    
return 0;
}