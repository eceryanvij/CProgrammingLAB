#include <stdio.h>


struct Employee{
	
	struct dateofbirth{
		int d;
		int m;
		int y;
 }db;		
	char name[30];
	int age;
	int id;
};


int main(){
	
	struct Employee a;


	printf("Name: ");
	scanf("%29[^\n]s", a.name);
	printf("Age:  ");
	scanf("%d", &a.age);
	printf("ID: ");
	scanf("%d", &a.id);
	printf("DD MM YYYY: ");
	scanf("%d %d %d", &a.db.d, &a.db.m, &a.db.y);
	
	printf("Name: %s  Age: %d ID: %d DOB: %d %d %d", a.name, a.age, a.id, a.db.d, a.db.m, a.db.y);
	
	
}
