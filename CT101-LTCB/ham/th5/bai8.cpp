#include<stdio.h>
#include<math.h>
int isSquareNumber(int n) {
    int r = sqrt(n);     // l?y ph?n nguyên c?a can b?c 2

    if (r * r == n) {
        return 1;        // là s? chính phuong
    } else {
        return 0;        // không ph?i
    }
}

int main(){
	printf("%d",isSquareNumber(1));
	printf("\n");
	printf("%d",isSquareNumber(10));
	printf("\n");
	if (isSquareNumber(490))
	    printf("YES");
	else printf("NO");

}
