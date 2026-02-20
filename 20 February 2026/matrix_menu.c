#include <stdio.h>
int input(int a,int b,int x[a][b])
{
	printf("Enter %d elements:\n",a*b);
	for (int i=0;i<a;i++)
		for (int j=0;j<b;j++)
			scanf("%d",&x[i][j]);
}
int display(int a,int b,int x[a][b])
{
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++)
			printf("%d\t",x[i][j]);
		printf("\n");
	}
}
int sum(int a,int b,int x[a][b],int y[a][b])
{
	int result[a][b];
	for (int i=0;i<a;i++)
		for (int j=0;j<b;j++)
			result[i][j] = x[i][j]+y[i][j]; 
	printf("The added matrix is\n");
	display(a,b,result);
}

int multiply(int a,int b,int x[a][b],int y[a][b]){	
	int result[a][b];
	for (int i = 0; i < a; i++)          
		for (int j = 0; j < b; j++) {     
			result[i][j] = 0;             
			for (int k = 0; k < a; k++) 
				result[i][j] += x[i][k] * y[k][j];
		}
	printf("The multiplied matrix is\n");
	display(a,b,result);		
}

int transpose(int a,int b,int x[a][b]){
	printf("The Transpose Matrix is:\n");
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++)
			printf("%d\t",x[j][i]);
		printf("\n");
	}
}

int main(){
	printf("Enter the number of rows and columns:\n");
	int m,n;
	scanf("%d %d",&m,&n);

	printf("MATRIX 1\n");
	int a[m][n];
	input(m,n,a);

	printf("MATRIX 2\n");
	int b[m][n];
	input(m,n,b);
	
	int result[m][n];
	
	int option=0;
	while (option!=5){
		printf("MENU OF OPERATIONS\n 1.ADD\n 2.MULTIPLY\n 3.TRANSPOSE\n 4.DISPLAY\n 5.EXIT\nEnter Your Option:");
		scanf("%d",&option);
		switch(option){
		case 1:{
			sum(m,n,a,b);
			break;}
		case 2:{
			multiply(m,n,a,b);
			break;}
		case 3:{
			transpose(m,n,a);
			transpose(m,n,b);
			break;}
		case 4:{
			printf("The First Matrix is:\n");
			display(m,n,a);
			printf("The Second Matrix is:\n");
			display(m,n,b);
			break;}
		case 5:{
			printf("Program Exit\n");
			break;}
		default:{
			printf("Wrong Option\n");
			break;}
		}
	}
}


