#include<stdio.h>
#include<math.h>
int kth_digit(int n, int k){
    if(k == 0)
        return n % 10;
    return kth_digit(n / 10, k - 1);
}
int main(){
	printf("%d", kth_digit(1346, 2));
	printf("\n");
	printf("%d", kth_digit(10000123, 2));

}
