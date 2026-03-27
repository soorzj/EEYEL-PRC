#include <stdio.h>
union address {
	char name[50];
	char house[50];
	char city[50];
	char state[50];
	char pin[50];
}; 

int main(){
union address ad;
printf("Enter the name:\n");
scanf("%s",ad.name);
printf("Stored name: %s\n",ad.name);
printf("Enter the House name:\n");
scanf("%s",ad.house);
printf("Stored House name: %s\n",ad.house);
printf("Enter the City name:\n");
scanf("%s",ad.city);
printf("Stored City name: %s\n",ad.city);
printf("Enter the State :\n");
scanf("%s",ad.state);
printf("Stored State: %s\n",ad.state);
printf("Enter the pincode:\n");
scanf("%s",ad.pin);
printf("Stored pincode: %s\n",ad.pin);
}
