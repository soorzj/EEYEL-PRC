#include <stdio.h>
#include <math.h>
int main () {
    int a, a_backup, last, dig=0; //variables to store number, to backup number, to store last digit, to count digits
    float ans = 0.0; //to store the answer of operation
    printf("Enter the number: \n");
    scanf("%d", &a);
    a_backup = a; //store for future use
    while (a != 0) {
        a = a / 10;
        dig++; 
        }
    a = a_backup; //restore the numbers
    while (a != 0) {
        last = a % 10;
        ans = ans + pow(last, dig);
        a = a / 10; 
        }
    if ((int)ans == a_backup) 
        printf("Number is Armstrong \n");
    else 
        printf("Number is not Armstrong. \n");
    return 0;
}
