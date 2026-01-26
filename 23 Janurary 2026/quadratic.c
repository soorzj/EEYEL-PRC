//program to print find roots of quadratic equation
#include <stdio.h>
#include <math.h>
int main(){
printf("For an equation of format ax2+bx+c=0, Enter 3 coeff.s a,b,c\n");
float a,b,c; //to store the coeff.s
scanf("%f %f %f", &a, &b, &c);
float d=(b*b)-(4.0*a*c);
if (d>0){
float rd=sqrt(d);
float root1=(-b+rd)/(2*a), root2=(-b-rd)/(2*a);
printf("2 Roots of the equations are: %f and %f\n",root1, root2);
}
else if (d<0){
float rd=sqrt(-d);
float real=-b/(2*a), img=rd/(2*a);
printf("2 Imaginary Roots of the equations are: %f + %f i and %f - %f i\n",real,img,real,img);
}
else {
float rd=sqrt(d);
float root=(-b+rd)/(2*a);
printf("Equal Roots of the equations is: %f\n",root);
}
return 0;
}
