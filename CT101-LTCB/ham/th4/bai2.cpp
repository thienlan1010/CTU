#include<stdio.h>
#include<math.h>
void factorize(int n){
		printf("%d = ", n);
		for(int i=2;i<=sqrt(n);i++){
			while(n!=1){
			if(n%i==0){
				printf("%d", i);
				n=n/i;
				if(n>1){
					printf(" x ");
				}
			}else{
				i++;
			}
		}
	}
		
}
/*
void factorize(int n){
    printf("%d = ", n);

    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            printf("%d", i);
            n = n / i;
            if(n > 1){
                printf(" x ");
            }
        }
    }
    if(n > 1){
        printf("%d", n);
    }
}*/
int main(){
	factorize(100);
	printf("\n");
	factorize(5);

}
