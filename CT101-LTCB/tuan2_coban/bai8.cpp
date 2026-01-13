//tinh nhiet do F
// ToF = 9/5ToC + 32
#include<stdio.h>
int main(){
	int c;
	float F;
	
	scanf("%d", &c);
	
	F = (float)9*c/5 + 32;
	printf("%d do C = %.2f do F", c, F);
	
}

