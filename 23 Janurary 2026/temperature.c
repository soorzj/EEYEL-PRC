//program to convert temp
#include <stdio.h>
int main(){
printf("Enter the celcius temperature\n");
int c,f; //to store the temperatures
scanf("%d", &c);
f=(c*9.0/5.0)+32;
printf("Temp in Farenheit is %d\n",f);
return 0;
}
