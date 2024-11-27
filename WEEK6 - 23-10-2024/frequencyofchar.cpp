#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	int freq[50] = {0};
	int i, j;
	printf("Enter string: ");
	scanf("%49[^\n]s", str);
	
	for(i = 0; i<strlen(str); i++){
		for(j = 0; j<strlen(str); j++){
			if(str[j] == str[i] && j<i){
				break;
			}else if(str[j] == str[i]){
				freq[i]++;
			}
		}
	}
	
	
	for(i = 0; i<strlen(str); i++){
		if(freq[i] != 0){
			printf("%c : %d\n", str[i], freq[i]);
		}
	}
}
	
	

	
