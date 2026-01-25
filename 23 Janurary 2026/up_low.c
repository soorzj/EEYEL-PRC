//program to convert uppercase to lowercase
#include <stdio.h>
int main(){
char a,b; //to store the characters
printf("Enter an UPPERCASE character\n");
scanf("%c", &a);
b=a+32; //converting to lowercase
printf("lowercase of %c is %c\n",a,b);
return 0;
}
