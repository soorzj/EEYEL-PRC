//program to check if number is odd or even
#include <stdio.h>
int main(){
printf("Enter the number\n");
int a; //to store the number
scanf("%d", &a);
if (a%2==0)
printf("%d is even\n",a);
else
printf("%d is odd\n",a);
return 0;
}
