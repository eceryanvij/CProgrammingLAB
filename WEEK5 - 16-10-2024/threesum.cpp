#include <stdio.h>

int main(){
	int n, i, j, k, target;
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
		for(j = 0; j<n; j++){
			for(k = 0; k<n; k++){
				if((a[i] + a[j] + a[k] == target)&&i!=j&&j!=k){
					printf("%d %d %d", a[i], a[j], a[k]);
					return true;
				}
			}
		}
	}
	
	return false;
	
	
}