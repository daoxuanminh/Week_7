#include<stdio.h>
#include<math.h>
int perfect(int n){
    int s =0;
    int a;
	int i;
	for(i = 1; i<= sqrt(n); i++){
		if(n%i ==0) s+= i + n/i;
	}
	if(sqrt(n)== (int)sqrt(n)) {
	a = s- n - sqrt(n) ;}
	
	else a= s - n;
	if( a == n) return 1;
	return 0;
	
}


int main(){
	int n;
	
	scanf("%d", &n);
	int i;
	for(i = 1; i<= n; i++){
	if(perfect(i)) printf("%d ", i);}
}
