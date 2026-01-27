#include<stdio.h>
#include<math.h>

int isPerfect(int n){
    int sum = 1;   

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            sum += i;
            if(i != n / i){
                sum += n / i;
            }
        }
    }

    if(sum == n)
        return 1;
    return 0;
}

int main(){
	if (isPerfect(6))
	    printf("YES");
	else
	    printf("NO");
}
