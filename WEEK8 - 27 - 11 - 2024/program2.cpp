#include <stdio.h>

int main(){
	
	FILE *fp, *odd, *even;
	int temp;
	fp = fopen("DATA.txt", "r");
	odd = fopen("ODD.txt", "w");
	even = fopen("EVEN.txt", "w");
	

	while(fscanf(fp, "%d", &temp) != EOF){
		if(temp %2 != 0){
			fprintf(odd, "%d ", temp);
		}else{
			fprintf(even, "%d ", temp);
		}
	}
	
	fclose(fp);
	fclose(odd);
	fclose(even);

	
}


