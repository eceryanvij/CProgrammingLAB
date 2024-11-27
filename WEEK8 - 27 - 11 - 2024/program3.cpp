#include <stdio.h>

int main(){
	
	FILE *f1, *f2;
	char ch;
	f1 = fopen("1.txt", "r");
	f2 = fopen("2.txt", "w");

	
  
	while((ch = getc(f1)) != EOF){
		putc(ch, f2);
	}
	
	fclose(f1);
	fclose(f2);
	
}


