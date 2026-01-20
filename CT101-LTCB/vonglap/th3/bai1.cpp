#include<stdio.h>
int main(){
	int n;
	long long tong=1;
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		tong*=i;
	}
	printf("%d! = %lld", n,tong);
}
