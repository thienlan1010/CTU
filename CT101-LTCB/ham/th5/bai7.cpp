#include<stdio.h>
#include<math.h>
void print_c(char c, int n) {
    if (n == 0) {
        return;   // di?u ki?n d?ng
    }

    printf("%c", c);     // in 1 ký t?
    print_c(c, n - 1);   // in ti?p n-1 ký t?
}

int main(){
	//print_c('*', 5);
	int i;
	for (i = 1; i <= 6; i++) {
	    print_c('*', i);
	    print_c('\n', 1);
	}

}
