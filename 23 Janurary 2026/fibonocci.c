#include <stdio.h>
int main() {
int n,a=1,b=0,sum=0;
printf("input the number of of terms to print\n");
scanf("%d",&n);
printf("the fibonocci series upto %d terms is:\n",n);
while(n>0) {
    printf("%d\n",sum);
    b=a;
    a=sum;
    sum=a+b;
    n=n-1;
}


}