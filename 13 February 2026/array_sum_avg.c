#include <stdio.h>
int main(){
int n,sum=0;
float avg=0.0;
printf("Enter the number of elements:\n");
scanf("%d",&n);
int a[n];
printf("Enter %d elements:\n",n);
for (int i=0;i<n;i++){
scanf("%d",&a[i]);
sum+=a[i];
}
avg=sum/n;
printf("The Sum of elements is %d and average is %f\n",sum,avg);
}

