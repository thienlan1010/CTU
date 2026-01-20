#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int tong=0;
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		tong+=pow(i,2);
	}
	printf("%d", tong);
}
