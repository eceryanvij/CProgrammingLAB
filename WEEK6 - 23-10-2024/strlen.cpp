#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	int count;
	printf("Enter string: ");
	scanf("%[^\n]s", str);
	for(count = 0; str[count] != '\0'; count++){
		;
	}
	printf("%d", count);
	
}
