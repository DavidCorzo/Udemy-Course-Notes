#include <stdio.h>
#include <stdlib.h>
// Create 4 variables, all type double.
// Width of rectangle
// height of rectangle
// perimeter of rectangle
// area of a rectangle

int main(int argc, char *argv[])
{
    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double perimeter = 2.0 * (width + height);
    printf("Width: %.4f, height: %.4f, The perimeter is: %f\n", width, height, perimeter);
    double area = (width * height);
    printf("The area is: %f\n", area);
    return 0;
}
