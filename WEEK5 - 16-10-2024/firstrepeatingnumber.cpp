#include <stdio.h>

int main(){
	int n, i, j;
	printf("Enter value of n: ");
	scanf("%d", &n);

	int a[n];
	for(i = 0; i<n; i++){
		printf("?(%d)", i+1);
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i<n-1; i++){
		for(j = i+1; j<n; j++){
			if (a[j] == a[i]){
				printf("%d", a[i]);
				return 0;
			}
		}
	}
	
}