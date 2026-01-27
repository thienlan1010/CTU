#include<stdio.h>
#include<math.h>
int GCD(int a, int b){
	a=abs(a);
	b=abs(b);
	while(b!=0){
		int r=(a%b);
		a=b;
		b=r;
	}	
	return a;
}

int main(){
	printf("%d", GCD(0, 4));
	printf("\n");

printf("%d", GCD(1, -5));
printf("\n");

printf("%d", GCD(6, 9));
printf("\n");

printf("%d", GCD(-12, 8));
printf("\n");

printf("%d", GCD(36, 33));
printf("\n");

printf("%d", GCD(-1000, -2000));
printf("\n");


}
