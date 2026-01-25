//program to find area of circle
#include <stdio.h>
#define PI 3.14159
int main(){
printf("Enter the radius\n");
float radius, area; //to store the radiius and area ans
scanf("%f", &radius);
area=PI*radius*radius;
printf("Area of circle is %f\n",area);
return 0;
}
