#include <stdio.h>
#include <string.h>


int main(){
	char s[50];
	int i;
	printf("Enter string: ");
	scanf("%[^\n]s", s);
	
	for(i = 0; s[i]!='\0'; i++){
		if (s[i] != ' '&& (int(s[i]) >= 65 && int(s[i]) <=90) ){
			s[i] += 32;
	}
		
	}
	printf("%s", s);
}
