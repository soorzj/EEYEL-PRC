#include <stdio.h>
int main() {
int n,sum=0,temp;
float avg;
printf("enter the value of n\n");
scanf("%d",&n);
for(int i=1; i<=n; i++) 
      {printf("enter the value to add\n");
        scanf("%d",&temp);
        sum+=temp;}
avg=sum/n;
printf("the avg of given %d terms is %.2f and %d\n",n,avg,sum);


}