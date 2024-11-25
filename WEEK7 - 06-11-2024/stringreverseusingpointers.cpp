#include <stdio.h>
#include <string.h>

void *stringreverse(char *s){
	char t;
	int i;
	for(i = 0; i<strlen(s)/2; i++){
		t = *(s+i);
		*(s+i) = *(s + strlen(s)-1-i);
		*(s + strlen(s)-1-i) = t;
	}

	
}


int main(){
	char a[50];
	printf("Enter string: ");
	scanf("%49[^\n]s", a);
	stringreverse(a);
	printf("%s", a);
	
}
