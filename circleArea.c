/*
Calculate Circle Area
by gitLemonade
19 October 2025
*/
#include <stdio.h>
#define PI 3.14159 //Define constant for PI

int main(){
	double area = 0.0;
	double radius = 0.0;
	
	printf("Please enter the radius (in meters): ");
	scanf("%lf", &radius);    //Input radius from user
	
	area = PI * radius * radius;  //Area formula: pi r^2
	
	printf("The area of the circle is %lf sq. m\n", area);
	return 0;
}