#include<stdio.h>
#include<string.h>

int main(){
	char s1[50]; //dynamic during runtime
	char s2[50];
	int i, x, y;
	scanf("%s", s1);
	fflush(stdin);
	scanf("%s", s2);
	x = strlen(s2);
	y = strlen(s1);
	
	for(i=0;i<x;i++){
		s1[y+i] = s2[i];  //analyse the error: strlen changes dynamically
	
	}
	printf("%s", s1);
	
	
}
