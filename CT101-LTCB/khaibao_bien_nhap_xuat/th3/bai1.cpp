//tinh do c tu do f
#include<stdio.h>
int main(){
	int f;
	float c;
	scanf("%d", &f);
	c = (float)5/9 * (f - 32);
	printf("%.d do F = %.2f do C", f, c);
}
