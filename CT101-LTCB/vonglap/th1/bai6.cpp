#include<stdio.h>
int main(){
	int n;
	float x;
	float tong=1;
	scanf("%f%d", &x, &n);
	for(int i=1;i<=n;i++){
		tong*=x;
	}
	printf("%.2f", tong);
}
