// Write a C program to find diameter, circumference and area of circle using functions.

#include <stdio.h>

const float PI = 3.14;

float diameter(float);
float circumference(float);
float area(float);

int main() {
    printf("Enter radius of the circle: ");
    float r; scanf("%f", &r);
    
    printf("Diameter of circle: %f\n", diameter(r));
    printf("Circumference of circle: %f\n", circumference(r));
    printf("Area of circle: %f\n", area(r));

    return 0;
}

float diameter(float radius) {
    return 2 * radius;
}

float circumference(float radius) {
    return PI * diameter(radius);
}

float area(float radius) {
    return PI * radius * radius;
}
