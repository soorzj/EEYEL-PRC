#include <stdio.h>
int main() {
int n,a=1,b=0,c=0;
printf("input the number of of terms to print\n");
scanf("%d",&n);
printf("the fibonocci series upto %d terms is:\n",n);
while(n>0) {
    printf("%d\n",c);
    b=a;
    a=c;
    c=a+b;
    n=n-1;
    }
}

