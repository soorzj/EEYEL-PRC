#include <stdio.h>

int main(){
	int n;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	int arr[n];
	int *a=arr; //now it point to start of array
	for (int i=0;i<n;i++){
		printf("Enter the element:\n");
		scanf("%d",(a+i));
		}
		
	printf("The elements are:\n");
	for (int i=0;i<n;i++)
		printf("%d \t",*(a+i));
	printf("\n");
	
	int sum=0;
	for (int i=0;i<n;i++)
		sum+=*(a+i);
	printf("Sum of the elements is: %d \n",sum);
}


