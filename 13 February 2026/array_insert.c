#include <stdio.h>
int main(){
int n,a[50];
printf("Enter the number of elements(less than 50):\n");
scanf("%d",&n);
printf("Enter %d elements:\n",n);
for (int i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter Element to be inserted:\n");
int el,pos;
scanf("%d",&el);
printf("Enter Position to be inserted(%d to %d):\n",0,n-1);
scanf("%d",&pos);

for (int i=n+1;i>=pos;i--)
a[i]=a[i-1];
a[pos]=el;
printf("The Array is:\n");
for (int i=0;i<=n;i++)
printf("%d\t",a[i]);
printf("\n");
}


