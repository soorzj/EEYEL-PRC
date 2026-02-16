#include <stdio.h>
int main(){
int m,n;
printf("Enter the number of rows and columns:\n");
scanf("%d %d",&m,&n);
int a[m][n];
printf("Enter %d elements:\n",m*n);
for (int i=0;i<m;i++)
for (int j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("The Transpose Matrix is:\n");
for (int i=0;i<n;i++){
for (int j=0;j<m;j++)
printf("%d\t",a[j][i]);
printf("\n");
}
}
