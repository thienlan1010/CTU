#include<stdio.h>
#include<math.h>
/*int checkPrime(long long p){
	if(p<2)
	return 0;
	for(int i=2;i<=sqrt(p);i++){
		if(p%i==0){
			return 0;
		}
	}
	return 1;
}*/
int checkPrime(long long  p) {
    int flag = 1;
    long long i;
    for (i = 2; i*i <= p; i++)
        if (p % i == 0)
            flag = 0;
            
    return flag;
}
int main(){
	printf("%d\n", checkPrime(67280421310721));
	printf("%d\n", checkPrime(67280421310723));
	int i;
	for (i = 2; i <= 10; i++)
    printf("%d %d\n", i, checkPrime(i));
}
