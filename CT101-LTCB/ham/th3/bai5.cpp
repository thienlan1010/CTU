#include<stdio.h>
#include<math.h>
int NumDigits(int n) {
	n=abs(n);
    if (n < 10)
        return 1;
    return 1 + NumDigits(n / 10);
}



int main(){
	printf("%d\n", NumDigits(123));
	printf("%d\n", NumDigits(-1234));
	printf("%d\n", NumDigits(604563));
	printf("%d\n", NumDigits(1));
}

