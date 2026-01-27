#include<stdio.h>
#include<math.h>
double power(float a, int n) {
    if (n == 0)
        return 1;
    return a * power(a, n - 1);
}
int main(){
	printf("%.4f\n", power(2, 3));
	printf("%.4f\n", power(3.14, 10));
	printf("%.4f\n", power(-2.0, 5));
}

