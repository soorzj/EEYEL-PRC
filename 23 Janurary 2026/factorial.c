#include <stdio.h>
int main() {
int f=1,n;
printf("enter the number to find factorial of\n");
scanf("%d",&n);
while(n>0) {
    f*=n;
    n-=1;
}
printf("the factorial of %d is %d\n",n,f);
}