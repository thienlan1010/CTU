//nhap 4 chu so, tinh so nut = (a+b+c+d) % 10
#include <stdio.h>

int main() {
    int n, dv, ch, tr, ng;
    scanf("%d", &n);

    dv = n % 10;
    ch = (n / 10) % 10;
    tr = (n / 100) % 10;
    ng = n / 1000;

    printf("%d", (dv + ch + tr + ng) % 10);

    return 0;
}
/*
#include <stdio.h>

int main() {
	int n, SoNut = 0;
	
	scanf("%d", &n);
	SoNut += n % 10;
	n = n / 10;
	SoNut += n % 10;
	n = n / 10;
	SoNut += n % 10;
	n = n / 10;
	SoNut += n % 10;
	n = n / 10;
	
	SoNut %= 10;
	
	printf("%d", SoNut);
}*/
