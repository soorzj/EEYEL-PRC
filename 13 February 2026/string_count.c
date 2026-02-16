#include <stdio.h>
#include <string.h>
int main(){
char a[50];
printf("Enter the String 1:\n");
scanf("%s",a);
int l=strlen(a),vowel=0,cons=0,space=0;
for(int i=0;i<l;i++){
;
    if(a[i]==' '){
        space++;
    }
    else if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
            a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
        vowel++;
    }
    else{
        cons++;
    }
}
printf("Length: %d\n",l);
printf("Vowels: %d\n",vowel);
printf("Consonants: %d\n",cons);
printf("Spaces: %d\n",space);
return 0;
 }
