#include <stdio.h>
#include <string.h>

int main(){
	
	char s[50];
	char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	int i, j;
	printf("Enter string: ");
	scanf("%49[^\n]s", s);
	
	for(i = 0; i<strlen(s); i++){
		for(j = 0; j<10; j++){
			if(vowels[j] == s[i]){
				printf("%c", s[i]);
				
			}
		}
	}
	
	return 0;
	
	

	
	
	
	
}
	
	