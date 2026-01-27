#include<stdio.h>
#include<math.h>
int isPower2(int n){
    int a = 1;   // 2^0

    while(a < n){
        a *= 2;
    }

    if(a == n)
        return 1;
    return 0;
}



int main(){
	if (isPower2(16))
	  	printf("YES");
	else  
		printf("NO");
	printf("\n");
	printf("%d\n", isPower2(1));
	printf("%d\n", isPower2(123));
	printf("%d\n", isPower2(11));
}
