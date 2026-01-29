#include<stdio.h>
#include<math.h>
int max2(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
int max3(int a, int b, int c) {
    return max2(max2(a, b), c);
}

int main(){
	printf("%d\n", max3(7, 9, 10));
	printf("%d\n", max3(10, 9, 7));
	printf("%d\n", max3(5, 5, 2));
	printf("%d\n", max3(5, 12, 5));
}
