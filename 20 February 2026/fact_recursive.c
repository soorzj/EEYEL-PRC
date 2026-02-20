#include <stdio.h>
int fact(int n){
	if(n<=0)
		return 1;
	else
		return (n*fact(n-1));
}
int main(){
	int num; //to store the number
	printf("Enter a value\n");
	scanf("%d", &num);
	int x=num;
	printf("The factorial of %d is %d\n",num,fact(num));
	return 0;
}
