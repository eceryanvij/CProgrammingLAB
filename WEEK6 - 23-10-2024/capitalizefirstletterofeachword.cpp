#include <stdio.h>
#include <string.h>

int main(){
	
	char s[50];
	int i, j;
	printf("Enter string: ");
	scanf("%49[^\n]s", s);
	
	for(i = 0; i<strlen(s); i++){
		if((i == 0  || s[i-1] == ' ') && (s[i] >= 97 && s[i] <= 122)){
			s[i] -= 32;
		}
	}
	printf("%s", s);
	
	return 0;
	
	

	
	
	
	
}
	
	