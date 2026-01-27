#include<stdio.h>
#include<math.h>
int isPrime(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int countPrimeNumbers(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    return count;
}

int main(){
	int a = countPrimeNumbers(1000, 100000);
	printf("%d", a);
	
}

