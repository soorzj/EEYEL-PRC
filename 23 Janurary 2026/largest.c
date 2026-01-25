//program to print find largets of 3 numbers
#include <stdio.h>
int main(){
printf("Enter 3 numbers\n");
int a,b,c,largest; //to store the input numbers and the answer
scanf("%d %d %d", &a, &b, &c);
if(a>=b && a>=c)
largest =a;
else if(b>=a && b>=c)
largest =b;
else
largest=c;
printf("Largest of the numbers is: %d\n",largest);
return 0;
}
