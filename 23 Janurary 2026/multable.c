#include <stdio.h>
#include <windows.h>
int main() {
int n;
printf("enter the number of which the multiplication table is to  printed:\n");
scanf("%d",&n);
printf("the multiplication table of %d is\n",n);    
for(int i=1; i<=10; i++)
    {printf(" %d x %d = %d\n",i,n,i*n);} 
        
        
    }