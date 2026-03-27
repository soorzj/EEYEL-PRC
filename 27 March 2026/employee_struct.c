#include <stdio.h>
struct employee {
	char name[50];
	int id;
	int salary;
};   //NOTE: WE NEED A ; HERE!

int main(){
	struct employee emp[3];
	for (int i=0;i<3;i++){
		printf("For Employee %d\n",i+1);
		printf("Enter the name:\n");
		scanf("%s",emp[i].name);
		printf("Enter the ID:\n");
		scanf("%d",&emp[i].id);
		printf("Enter the Salary:\n");
		scanf("%d",&emp[i].salary);
		}
	printf("Employee Details:\n");
	for (int i=0;i<3;i++){
		printf("Employee %d\n",i+1);
		printf("Name:%s\n",emp[i].name);
		printf("ID:%d\n",emp[i].id);
		printf("Salary:%d\n",emp[i].salary);
		}
	}
	
