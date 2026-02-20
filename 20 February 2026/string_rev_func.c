#include <stdio.h>
#include <string.h>
void reverse(char a[],char rev[],int l){
	for(int i=0;i<l;i++)
		rev[i]=a[l-i-1];
	rev[l]='\0';
}
int main(){
	char a[50]; // to store the  string
	printf("Enter the String 1:\n");
	scanf("%s",a);
	int l=strlen(a); //to store the length of strig
	char rev[l+1];	// to store the reversed sting
	reverse(a,rev,l);
	printf("Reversed String: %s\n",rev);
}
