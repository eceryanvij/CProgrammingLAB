#include <stdio.h>

int main(){
	int n;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int i, j, t;
	int a[n-1];
	int c = 0;
	printf("Enter N-1 unique integers in range [1, N]\n");
	for(i = 0; i<n-1; i++){
		printf("?", i+1);
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i<n-2; i++){
		for(j = 0; j<n-2-i; i++){
			t = a[j];
			a[j] = a[j+1];
			a[j+1] = t;
			
		}
	}
	
	for(i = 1; i<n+1; i++){
		for (j = 0; j<n-1; j++){
			if(a[j] == i){
				c += 1;
				break;			
			}
		}
		
		if(c == 0){
			printf("%d", i);
			return 0;
		}else{
			c = 0;
		}
		
	}
	
	
	
	return 0;
	
	
}