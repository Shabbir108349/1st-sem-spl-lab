#include<stdio.h>
#define PI 3.1416

//Write a c program to find area and curcumference of a circle.

int main(){
    int radius;
    printf("Enter the radius of the circle\n");
    scanf("%d",&radius);
    double area = PI * radius * radius;
    printf("The area of the circle is: %.2f \n",area);
    double circumference = 2 * PI * radius;
    printf("The circumference of the circle is: %.2f",circumference);


    return 0;
}