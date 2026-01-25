//program to convert year from YYYY to YY
#include <stdio.h>
int main(){
printf("Enter the year\n");
int y1,y2; //to store the year in 2 formats
scanf("%d", &y1);
y2=y1%100;
printf("YY format of %d is '%d\n",y1,y2);
return 0;
}
