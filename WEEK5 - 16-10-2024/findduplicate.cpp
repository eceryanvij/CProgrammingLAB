#include <stdio.h>

int main(){
	
	int n, i, j, t;
	printf("Enter value of n: ");
	scanf("%d", &n);

	int a[n];
	for(i = 0; i<n; i++){
		printf("?(%d)", i+1);
		scanf("%d", &a[i]);
	}
	
	//bubblesort
	for(i = 0; i<n-1; i++){
		for(j = 0; j<n-1-i; j++){
			if(a[j] > a[j + 1]) {  // Compare adjacent elements
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
			
		}
	}	
	
	
	for(i = 0; i<n-1; i++){
		if(a[i] == a[i+1]){
			printf("%d ", a[i]);
		}
	}
		
	
	
	
	
}