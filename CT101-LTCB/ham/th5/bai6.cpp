#include<stdio.h>
#include<math.h>
void dec2bin(int n) {
    if (n == 0)
        return;
    dec2bin(n/2);
    printf("%d", n%2);
}
int main(){
	dec2bin(3);
	printf("\n");
	dec2bin(1);
	printf("\n");
	dec2bin(14);
	printf("\n");
	dec2bin(64);

}
