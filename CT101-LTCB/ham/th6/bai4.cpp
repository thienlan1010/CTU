/*
7!! = 1 * 3 * 5 * 7 = 105
8!! = 2 * 4 * 6 * 8 = 384
n	n!!		Kq
1	1		1
2	2		2
3	1×3		3
4	2×4		8
5	1×3×5	15
6	2×4×6	48
*/
#include<stdio.h>
#include<math.h>
/*long long Factorial2(int n) {
    long long result = 1;

    if (n % 2 == 0) {              // n ch?n
        for (int i = 2; i <= n; i += 2) {
            result *= i;
        }
    } else {                       // n l?
        for (int i = 1; i <= n; i += 2) {
            result *= i;
        }
    }

    return result;
}*/
//de quy
long long Factorial2(int n) {
    if (n <= 1)
        return 1;
    return n * Factorial2(n - 2);
}

int main(){
	int i;
	for(i=1;i<=25;i++){
		printf("%lld\n",Factorial2(i));
	}
   
	printf("%lld",Factorial2(24));

}
