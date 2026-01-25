//program to swap 2 numbers 
#include <stdio.h>
int main(){
int a,b; //to store the numbers
printf("Enter the value of a\n");
scanf("%d", &a);
printf("Enter the value of b\n");
scanf("%d", &b);
a=a+b; b=a-b; a=a-b; //swapping
printf("After swap, value of a is %d and b is %d\n",a,b);
return 0;
}
