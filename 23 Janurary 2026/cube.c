//program to cube a number using pow
#include <stdio.h>
#include <math.h>
int main(){
int num,cube; //to store the number and ans
printf("Enter a value\n");
scanf("%d", &num);
cube=pow(num,3);
printf("Cube of %d is %d\n",num,cube);
return 0;
}
