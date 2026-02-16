#include <stdio.h>
int main(){
int n;
printf("Enter the number of elements:\n");
scanf("%d",&n);
int a[n];
printf("Enter %d elements:\n",n);
for (int i=0;i<n;i++)
scanf("%d",&a[i]);
for (int x=0;x<n-1;x++)
for(int y=0;y<n-x-1;y++)
if( a[y]>a[y+1]){
int temp=a[y];
a[y]=a[y+1];
a[y+1]=temp;
}
printf("The Sorted Array is:\n");
for (int i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
}
	



