#include <stdio.h>
#include <math.h>

int main() {
int p,sr,flag=1;
printf("enter the number to check\n");
scanf("%d",&p);
sr=(int)sqrt(p);

if(p==0 || p==1) {printf("the number %d is neither prime nor composite",p);}

else if(p==2) {printf("the number %d is prime",p);}


else {for(int i=2; i<=sr; i++) {
    if(p%i==0) 
    {flag=0;
     break;} }

if(flag==1) {printf("the given number %d is a prime number\n",p);}
else {printf("the given number %d is not a prime number\n",p);}
    }}