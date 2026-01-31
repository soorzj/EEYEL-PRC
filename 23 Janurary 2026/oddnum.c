#include <stdio.h>
#include <windows.h>
int main() {
int N;
printf("enter the upper range upto:\n");
scanf("%d",&N);
printf("the odd numbers between 1 and %d is\n",N);    
for(int i=0; i<=N; i++)
    { if(i%2!=0)
        {printf("%d\n",i);
        Sleep(1000);}
    else {continue;}}

}