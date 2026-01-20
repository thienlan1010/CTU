#include<stdio.h>
int main(){
	int n;
	float tong=0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		tong+=(float)i/(i+1);
	}
	printf("%.2f", tong);
}
