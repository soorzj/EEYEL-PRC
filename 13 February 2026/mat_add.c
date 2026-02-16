#include <stdio.h>
int main(){
printf("Enter the number of rows and columns:\n");
int m,n;
scanf("%d %d",&m,&n);

printf("MATRIX 1\n");
int a[m][n];
printf("Enter %d elements:\n",m*n);
for (int i=0;i<m;i++)
for (int j=0;j<n;j++)
scanf("%d",&a[i][j]);

printf("MATRIX 2\n");
int b[m][n];
printf("Enter %d elements:\n",m*n);
for (int i=0;i<m;i++)
for (int j=0;j<n;j++)
scanf("%d",&b[i][j]);

int result[m][n];

for (int i = 0; i < m; i++)          
 for (int j = 0; j < n; j++) {     
 result[i][j] = a[i][j]+b[i][j];             
}

printf("The Result Matrix is:\n");
for (int i=0;i<m;i++){
for (int j=0;j<n;j++)
printf("%d\t",result[i][j]);
printf("\n");
}
}
