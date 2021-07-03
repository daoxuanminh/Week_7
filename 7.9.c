#include<stdio.h>

int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	long long s = 1;
	for(int i = 1; i <= n; i++){
		s*=i;
	}
	printf("%d! = %lld",n,s);
}
