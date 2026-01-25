//program to print find weekday from week date
#include <stdio.h>
int main(){
printf("Enter the weekdate (1-7)\n");
int a; //to store the week date
scanf("%d",&a);
switch (a){
case 1:{
printf("Weekday is: Sunday\n");
break;}
case 2:{
printf("Weekday is: Monday\n");
break;}
case 3:{
printf("Weekday is: Tuesday\n");
break;}
case 4:{
printf("Weekday is: Wednesday\n");
break;}
case 5:{
printf("Weekday is: Thursday\n");
break;}
case 6:{
printf("Weekday is: Friday\n");
break;}
case 7:{
printf("Weekday is: Saturday\n");
break;}
default:
printf("Wrong weekday\n");
}
return 0;
}
