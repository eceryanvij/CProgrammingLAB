#include <stdio.h>

int recursiveseries(int n,int a,int b, int c){
	int sum = 0;
	int i;
	if(n == 1){
		return a;
	}else if(n == 2){
		return b;
	}else if(n == 3){
		return c;
	}else{
		for(i = 0; i<3; i++){
			sum += recursiveseries(n-1-i, a, b, c);
		}
	}
	return sum;
}

int main(){
	int a, x, y, z;
	printf("Enter n: ");
	scanf("%d", &a);
	printf("Enter first three terms(sep by space): ");
	scanf("%d %d %d", &x, &y, &z);
	
	printf("%d(th) term of the series is: %d", a, recursiveseries(a, x, y, z));
	
}
