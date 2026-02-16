#include <stdio.h>
int main(){
int n;
printf("Enter the number of elements:\n");
scanf("%d",&n);
int a[n];
printf("Enter %d elements:\n",n);
for (int i=0;i<n;i++)
scanf("%d",&a[i]);

printf("Enter Element to be found:\n");
int search,flag=0;
scanf("%d",&search);
for (int i=0;i<n;i++)
if(a[i]==search){
printf("Element found at position %d\n",i+1);
flag=1;
}
if(flag==0)
	printf("Element not found in array\n");
}
