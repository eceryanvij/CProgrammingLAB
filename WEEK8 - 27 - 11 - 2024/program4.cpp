#include <stdio.h>

int main(){
	
	FILE *f1, *f2;
	char a, b;
	f1 = fopen("1.txt", "r");
	f2 = fopen("2.txt", "r");
	fseek(f1, 0, 2);
	int size1 = ftell(f1);
	fseek(f2, 0, 2);
	int size2 = ftell(f2);
	rewind(f1);
	rewind(f2);

	if(size1 != size2){
		printf("NOT EQUAL");
		fclose(f1);
		fclose(f2);
		return 0;
	}
  
	while((a = getc(f1) ) != EOF && (b = getc(f2)) != EOF){
		if(a!=b){
			printf("NOT EQUAL");
			fclose(f1);
			fclose(f2);
			return 0;
		}
	}
	
	printf("EQUAL!");
	return 1;
	
	fclose(f1);
	fclose(f2);
	
}


