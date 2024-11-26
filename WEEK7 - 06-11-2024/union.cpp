#include <stdio.h>


union Student{
	
	char name[50];
	int marks[5];
	int rollnum;
	
};

int main(){

	int sum = 0, i;
	union Student s;
	printf("Enter name: ");
	scanf("%49[^\n]s", &s.name);
	printf("Enter marks(out of 100) seperated by space: ");
	scanf("%d %d %d %d %d", &s.marks[0],&s.marks[1], &s.marks[2], &s.marks[3], &s.marks[4]);
	for(i = 0; i<5; i++){
		sum += s.marks[i];
	}
	printf("Roll no:  ");
	scanf("%d", &s.rollnum);
	
	printf("Your percentage is: %.2f%%", (float)sum/5);
	
}
