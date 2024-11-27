#include <stdio.h>
#include <string.h>

int main(){
	char a[50], b[50];
	int i, j, count = 0;
	printf("Enter string(1): ");
	scanf("%49[^\n]s", a);
	fflush(stdin);
	printf("Enter string(2): ");
	scanf("%49[^\n]s", b);
	
	if(strlen(a)<strlen(b)){
		printf("NO!");
		return 0;
	}
	
	for(i = 0; i<strlen(b); i++){                     // b- busb, a-air----
		for(j = 0; j<strlen(a); j++){
			if(b[i] == a[j]){
				a[j] = '-';
				break;
				
			}
			
		}
	}
	
	for(i = 0; i<strlen(a); i++){
		if(a[i] == '-'){
			count += 1;
		}
	}
	
	if(count == strlen(b)){
		printf("YES!");
	}else{
		printf("NO!");
	}
	
}