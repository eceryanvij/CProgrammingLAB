#include <stdio.h>

int main(){
	
	FILE *f1;
	char b;
	f1 = fopen("1.txt", "r");
	
	while((b = getc(f1)) != EOF){
		printf("%d ", b);
	}
	
	
	
	fclose(f1);
	return 0;
	
}


