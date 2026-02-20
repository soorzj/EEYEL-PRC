#include <stdio.h>
int main(){
	int num,fact=1; //to store the number and factorial
	printf("Enter a value\n");
	scanf("%d", &num);
	int x=num;
	while(x>0){
		fact*=x;
		x--;
	}
	printf("The factorial of %d is %d\n",num,fact);
	return 0;
}
