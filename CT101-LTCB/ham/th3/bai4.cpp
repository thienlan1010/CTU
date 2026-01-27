#include<stdio.h>
long long sum(int n){
    if(n == 1)
        return 1;
    return sum(n - 1) + n;
}

int main(){
	//long long S = sum(10);
	//printf("%lld", S);
	//printf("\n");
	//long long S = sum(123);
	//printf("%lld", S);
	//printf("\n");
	//long long S = sum(1234);
	//printf("%lld", S);
	//printf("\n");
	long long S = sum(100000);
	printf("%lld", S);
}

