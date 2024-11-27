#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	int alphabet[26];
	int i;
	printf("Enter string: ");
	scanf("%49[^\n]s", str);
	
	for(i = 0; i<strlen(str); i++){
		if(str[i] >= 65 && str[i]<= 90){
			alphabet[str[i]-65]++;
		}else if(str[i] >= 97 && str[i]<= 122){
			alphabet[str[i]-97]++;
		}
	}
	
	for(i = 0; i<26; i++){
		if(alphabet[i] == 0){
			printf("NOT PANAGRAM");
			return 0;
		}
	}
	
	printf("PANAGRAM");
	return 0;
}
	
	
	
	//65, 122 - A, a
	
	
	

	
