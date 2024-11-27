#include <stdio.h>
#include <string.h>

int main(){
	
	char a[50];
	int counter[26] = {0}; // 0 to 25, a= 0 and z is 25, we take a as reference
	int max = 0, min = 50;
	char lchar, mchar;
	int i;
	printf("Enter string: ");
	fgets(a, sizeof(a), stdin);
	
	for(i = 0; i<strlen(a); i++){
		if(a[i] >= 'a' && a[i] <= 'z'){
			counter[a[i] - 'a'] += 1;
		}else if(a[i] >= 'A' && a[i] <= 'Z'){
			counter[a[i] - 'A'] += 1;
		}
		
	}
	
	for(i = 0; i<26; i++){
		if(counter[i] > max){
			max = counter[i];
			mchar = 'a' + i;
		
			
		}
		if(counter[i]<min && counter[i]!=0){
			min = counter[i];
			lchar = 'a' + i;
		}
		
	}
	
	printf("%c %d %c %d", lchar, min, mchar, max);
		
}
	
	
	
	
	
	
	
	
	