#include <stdio.h>
#include <string.h>

int main(){
	char s[50], t[50];
	int i;
	printf("Enter string(1): ");
	scanf("%49[^\n]s", s);
	fflush(stdin);
	printf("Enter string(2): ");
	scanf("%49[^\n]s", t);
	
	if(strlen(s) != strlen(t)){
		printf("UNEQUAL");
		return 0;
	}
	for(i = 0; i<strlen(s); i++){
		if(s[i] != t[i]){
			;
		}else{
			printf("UNEQUAL");
			return 0;
		}
	}
	
	printf("EQUAL");
	return 0;

	}
	
	