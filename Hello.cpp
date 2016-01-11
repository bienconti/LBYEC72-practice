#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416

void printNameCourse();
float computeCircleArea(float functionRadius);


int main(){
	

	float area;
	float radius;
	
	radius= 14;
	area = computeCircleArea(radius);
	printf("The area is %f\n", area);

	
	
	

	return EXIT_SUCCESS;
	
}


float computeCircleArea(float functionRadius){
	
	return PI * functionRadius * functionRadius;
		return EXIT_SUCCESS;
}


	

