#include <stdio.h>
void swap(int *x, int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
	}
int main(){
	int *a, *b;
	printf("Enter 2 numbers:\n");
	scanf("%d %d",a, b);
	int sum= *a + *b;
	printf("The numbers are: %d and %d\n",*a, *b);
	printf("The sum is %d\n",sum);
	swap(a,b);
	printf("The numbers after swap are: %d and %d\n",*a, *b);
}


