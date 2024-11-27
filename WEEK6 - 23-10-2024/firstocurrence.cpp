#include <stdio.h>
#include <string.h>

int main(){
	char s[50], target;
	int i;
	printf("Enter string: ");
	scanf("%49[^\n]s", s);
	fflush(stdin);
	printf("Enter target character: ");
	scanf("%c", &target);
	
	for(i = 0; i<strlen(s); i++){
		if(s[i] == target){
			printf("%d, %u", i, &s[i]);
			break;
		}
	}
	
	
	
	
	
	
}