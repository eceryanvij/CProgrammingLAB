#include <stdio.h>

float average(int *p, int q){
	int j;
	float sum = 0;
	for(j = 0; j<q; j++){
		sum += p[j];
	}
	return sum/q;
}

int main(){
	int n, i;
	printf("Enter n: ");
	scanf("%d", &n);
	int nums[n];
	printf("Enter values of array(seperated by space) ");
	for(i = 0; i<n; i++){
		scanf("%d", &nums[i]);
	}
	
	printf("%f", average(nums, n));
	
	
	
	
}
