#include <stdio.h>
#include <string.h>

int main(){
	char s[50];
	int i;
	printf("Enter string(to check for palindrome): ");
	scanf("%49[^\n]s", s);
	
	for(i = 0; i<strlen(s)/2; i++){
		if(s[i] != s[strlen(s)-1-i]){
			printf("NOT PALINDROME");
			return 0;
		}
	}
	
	printf("PALINDROME");
	return 0;
	

}
	
	