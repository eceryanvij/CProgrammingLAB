#include <stdio.h>
#include <string.h>

int main(){
	char a[50];
	int freq[50] = {0};
	int i, j;
	printf("Enter string: ");
	scanf("%49[^\n]s", a);
	
	for(i = 0; i<strlen(a); i++){
		for(j = 0; j<strlen(a); j++){
			if(a[i] == a[j] && j<i){
				break;
			}else if(a[i] == a[j]){
				freq[i] += 1;
			}
	}
	
	for(i = 0; i<strlen(a); i++){
		if(freq[i]!= 0){
			if(freq[i] != a[i] - 96){
				printf("NO!");
				return 0;
			}
		}
	}
	
	printf("YES!");
	return 0;
	
}
}


/*#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	int freq[50] = {0};               //bba
										//201
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
		if(freq[i]!= 0){
			if(freq[i] != str[i] - 96){
				printf("NO!");
				return 0;
			}
		}
	}
	
	printf("YES!");
	return 0;
} */
	

	
