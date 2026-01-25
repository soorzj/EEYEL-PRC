//program to check if character is alphabet
#include <stdio.h>
int main(){
char a; //to store the character
printf("Enter a character\n");
scanf("%c", &a);
if(a>=65&&a<=91 || a>=97&&a<=123)
	printf("%c is an alphabet",a);
else
	printf("%c is not an alphabet\n",a);
return 0;
}
