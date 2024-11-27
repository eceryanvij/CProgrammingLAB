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
	
	for(i = 0; i<n; i++){
		for(j = 0; j<n; j++){
			if ((a[j] == a[i])&& i!=j){
				c+=1;
			}
			
		}
		
		if(c == 0){
			printf("%d", a[i]);
			break;
		}else{
			c = 0;
		}
	}
	
}