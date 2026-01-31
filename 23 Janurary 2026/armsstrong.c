#include <stdio.h>
#include <math.h>
int main() {
int a,temp=0,c=0,d=0;
printf("enter the number to check:\n");
scanf("%d",&a);
c=a;
while(c>0) {
    d=c%10;
    temp+=d*d*d;
    c=c/10;
}
if (temp == a)
        printf("%d is an Armstrong number\n", a);
    else
        printf("%d is not an Armstrong number\n", a);

}