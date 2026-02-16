#include <stdio.h>
#include <string.h>
int main(){
char a[50],b[50];
printf("Enter the String 1:\n");
scanf("%s",a);
printf("Enter the String 2:\n");
scanf("%s",b);
if(strlen(a)+strlen(b)<50)
strcat(a,b);
else
strncat(a,b,49-strlen(a));
printf("Concatenated String: %s\n",a);
}

