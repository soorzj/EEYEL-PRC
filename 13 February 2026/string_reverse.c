#include <stdio.h>
#include <string.h>
int main(){
char a[50];
printf("Enter the String 1:\n");
scanf("%s",a);
int l=strlen(a);
char rev[l+1];
for(int i=0;i<l;i++)
rev[i]=a[l-i-1];
rev[l]='\0';
printf("Reversed String: %s\n",rev);
}
