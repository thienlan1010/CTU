//tinh dien tro r1 mac noi tiep voi r2 va r3(r2, r3 mac song song)

#include<stdio.h>
int main(){
	int R1, R2, R3;
	float Rtong, R23;
	
	scanf("%d%d%d", &R1, &R2, &R3);
	
	R23 = (float)(R2*R3)/(R2+R3);
	Rtong = R1 + R23;
	printf("%.2f", Rtong);
	
}

