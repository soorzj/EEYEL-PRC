#include <stdio.h>
int main(){
printf("MATRIX 1\n");
printf("Enter the number of rows and columns:\n");
int m,n;
scanf("%d %d",&m,&n);
int a[m][n];
printf("Enter %d elements:\n",m*n);
for (int i=0;i<m;i++)
for (int j=0;j<n;j++)
scanf("%d",&a[i][j]);

printf("MATRIX 2\n");
printf("Enter the number columns(number of rows is %d):\n",n);
int g;
scanf("%d",&g);
int b[n][g];
printf("Enter %d elements:\n",g*n);
for (int i=0;i<n;i++)
for (int j=0;j<g;j++)
scanf("%d",&b[i][j]);

int result[m][g];

for (int i = 0; i < m; i++)          
 for (int j = 0; j < g; j++) {     
 result[i][j] = 0;             
 for (int k = 0; k < n; k++) 
  result[i][j] += a[i][k] * b[k][j];
}

printf("The Result Matrix is:\n");
for (int i=0;i<m;i++){
for (int j=0;j<g;j++)
printf("%d\t",result[i][j]);
printf("\n");
}
}




