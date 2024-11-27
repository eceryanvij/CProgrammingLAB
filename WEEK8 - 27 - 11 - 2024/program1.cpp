#include <stdio.h>

int main(){
	
	FILE *fp;
	char ch;
	fp = fopen("INPUT.txt", "w+");

	
	while((ch = getchar()) != '\n'){
		putc(ch, fp);
	}
	rewind(fp);
	while((ch = getc(fp))!= EOF)  {
	
	 printf("%c", ch);
	}
	
	fclose(fp);

	
}
