/*
	LCM(a,b)=|a×b| / GCD(a,b)
	Cong thuc nay dung voi moi so nguyen khac 0.
	
	gcd(a, b) = gcd(b, a % b)
	gcd(a, 0) = a
	
	VD: gcd(12, 18)
	gcd(18, 12)
	gcd(12, 6)
	gcd(6, 0) => 6

	a = 12, b = 18
	GCD = 6
	LCM = 12*18 / 6 = 36
	
	a = -4, b = 6
	GCD = 2
	LCM = 4*6 / 2 = 12


*/
#include<stdio.h>
#include<math.h>
int GCD(int a, int b) {
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int LCM(int a, int b) {
    int gcd = GCD(a > 0 ? a : -a, b > 0 ? b : -b);
    return (a > 0 ? a : -a) * (b > 0 ? b : -b) / gcd;
}


int main(){
	printf("%d", LCM(1, 4));
	printf("\n");
	printf("%d", LCM(6, 9));
	printf("\n");
	printf("%d", LCM(-6, 9));
	printf("\n");
	printf("%d", LCM(-12, 8));
	printf("\n");
	printf("%d", LCM(1000, 2000));

}
