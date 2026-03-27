#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	for (int i=0;i<n;i++){
		printf("Enter the element:\n");
		scanf("%d", (a+i)); //or we can use scanf("%d", &a[i]);
		}
		
	printf("The elements are:\n");
	for (int i=0;i<n;i++)
		printf("%d \t",*(a+i)); //or we can use printf("%d \t", a[i]);
	printf("\n");
	
	int sum=0;
	for (int i=0;i<n;i++)
		sum+=*(a+i);   //or we can use sum += a[i];
	printf("Sum of the elements is: %d \n",sum);
	
	}
