#include <stdio.h>
int main(){
char a[50],b[50];
printf("Enter the String 1:\n");
scanf("%s",a);
printf("Enter the String 2:\n");
scanf("%s",b);

int len_a=0,len_b=0;
for(int i=0;i<50;i++)
if(a[i]=='\0'){
  len_a=i;
  break;
}

for(int i=0;i<50;i++)
if(b[i]=='\0'){
  len_b=i;
  break;
}

int count=0,total=len_a+len_b;

while(len_a<=total){
  a[len_a]=b[count];
  len_a++;
  count++;
}
printf("Concatenated String: %s\n",a);
}

