#include <stdio.h>

int main(){
	
	FILE *fp;
	int temp, sum = 0;
	fp = fopen("INTEGERS.txt", "r+");

	while(fscanf(fp, "%d", &temp) != EOF){
		sum += temp;
	}
	
	fseek(fp, 1, 2);
	fprintf(fp, "Sum: %d", sum);
	
	
	fclose(fp);
	return 0;

	
}


