#include <stdio.h>

int main(){
	
	int i, j, n;
	
	printf("Enter n value: ");
	scanf("%d", &n);
	
	for(i =0; i<n; i++){
		for(j = 0; j<2*n - 1; j++){
			if(j >= i && j <= 2*n - 2 - i){
				printf("*");
			}else{
				printf(" ");
			}
			
		}
		printf("\n");
	}	

}
