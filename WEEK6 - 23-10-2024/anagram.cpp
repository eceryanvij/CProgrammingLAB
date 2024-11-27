#include <stdio.h>
#include <string.h>

int main(){
	char a[50], b[50];
	int i, j;
	char t, k;
	printf("Enter string(1): ");
	scanf("%49[^\n]s", a);
	fflush(stdin);
	printf("Enter string(2): ");
	scanf("%49[^\n]s", b);
	
	if(strlen(a)!=strlen(b)){
		printf("NOT ANAGRAM");
		return 0;
	}	
	
	for(i = 0; i<strlen(a)-1; i++){
		for(j = 0; j<strlen(a)-1; j++){
			if(a[j+1] < a[j]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				
			}
			if(b[j+1] < b[j]){
				k = b[j];
				b[j] = b[j+1];
				b[j+1] = k;
				
			}
		}
	}
	
	for(i = 0; i<strlen(a); i++){
		if(a[i]!=b[i]){
			printf("NOT ANAGRAM");
			return 0;
		}
		
	}
	
	
	printf("ANAGRAM");
	return 0;
	
}