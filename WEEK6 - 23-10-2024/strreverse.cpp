#include <stdio.h>
#include <string.h>


int main(){
	char a[50];
	int i;
	char t;
	printf("Enter string: ");
	scanf("%[^\n]s", a);
	
	for(i = 0; i<strlen(a)/2; i++){
		t = a[i];
		a[i] = a[strlen(a)-1-i];
		a[strlen(a)-1-i] = t;
	}
	printf("%s", a);
	
	

}
