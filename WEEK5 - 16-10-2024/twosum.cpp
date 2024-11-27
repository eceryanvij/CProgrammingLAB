#include <stdio.h>

int main(){
	
	int n, i, j, target;
	printf("Enter value of n: ");
	scanf("%d", &n);
	printf("Enter target sum: ");
	scanf("%d", &target);
	
	int a[n];
	for(i = 0; i<n; i++){
		printf("?(%d)", i+1);
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i<n; i++){
		for(j = i + 1; j<n; j++){
			if(a[i] + a[j] == target){
				printf("%d, %d", a[i], a[j]);
				return true;
			}
		}
	}
	
	return false;
	
	
	
}