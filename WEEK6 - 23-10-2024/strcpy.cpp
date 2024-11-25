#include<stdio.h>
#include<string.h>

int main(){
	char s1[] = "HelloWorld"; //dynamic during runtime
	char s2[] = "ABCDEFGHIJK";
	int i, j;
	
	if(strlen(s2) > strlen(s1)){	
		for(i =0; i<strlen(s1); i++){
			s1[i] = s2[i];
	}}else{
		for(i =0; i<strlen(s2)+1; i++){
			s1[i] = s2[i];
	}
		
	}
		
	printf("%s", s1);
	
}
