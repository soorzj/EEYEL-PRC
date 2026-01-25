//program to evaluate the expression
#include <stdio.h>
int main(){
printf("Enter the values a,b,c,d,e,f,g \n");
float a,b,c,d,e,f,g; //to store the variables
scanf("%f %f %f %f %f %f %f", &a, &b, &c, &d, &e, &f, &g);
float ans=(a-b/c*d+e)*(f+g);
printf("Answer of the Expression is %f\n",ans);
return 0;
}
