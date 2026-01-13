/*
1 m = 100 cm
1 km = 1000 m

*/
#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	
	printf("%dcm = %.3fm= %.3fkm", n, (float)n/100, (float)n/100000);
}
