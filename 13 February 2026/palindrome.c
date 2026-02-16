#include <stdio.h>
#include <string.h>
int main(){
char a[50];
printf("Enter the String 1:\n");
scanf("%s",a);
char b[strlen(a)+1];
for(int i=0;i<strlen(a);i++)
b[i]=a[strlen(a)-i-1];
b[strlen(a)]='\0';
printf("Reversed String: %s\n",b);
if(strcmp(a,b)==0)
printf("The String is Palindrome\n");
else if(strcmp(a,b)==32||strcmp(a,b)==-32)
printf("The String is Palindrome when not considering case\n");
else
printf("The String is not Palindrome\n");
}

