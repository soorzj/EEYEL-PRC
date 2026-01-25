//program to implement Calculator
#include <stdio.h>
int main(){
printf("Enter the operands (x and y)\n");
int x,y; //to store the operands
scanf("%d %d",&x,&y);
printf("Enter the operator (+,-,/,*)\n");
char op; //to store the operator
scanf("%c %c",&op,&op);
switch (op){
case '+':{
printf("Sum of numbers is %d\n",x+y);
break;}
case '-':{
printf("Difference of numbers is %d\n",x-y);
break;}
case '*':{
printf("Product of numbers is %d\n",x*y);
break;}
case '/':{
printf("Quotient of numbers is %d\n",x/y);
printf("Reminder of division is %d\n",x%y);
break;}
default:
printf("Wrong operator\n");
}
return 0;
}
