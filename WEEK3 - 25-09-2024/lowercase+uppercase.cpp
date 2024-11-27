#include <stdio.h>

int main(){
	int x = 'a';
	int y = 'A';
	int i, n = 25;
	
	for(i = 0; i<26; i++){
		printf("%c", x+i);
	}
	printf("\n");
	for(i = 0; i<26; i++){
		printf("%c", y+i);
	}
}