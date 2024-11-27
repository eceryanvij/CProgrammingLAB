#include <stdio.h>

int main(){
	
	FILE *f1, *f2;
	char b;
	f1 = fopen("1.txt", "a");
	f2 = fopen("2.txt", "r");
	
	fseek(f1, 0, 2);
	
	while((b = getc(f2)) != EOF){
		putc(b, f1);
	}
	
	
	
	fclose(f1);
	fclose(f2);
	
	return 0;
	
}


