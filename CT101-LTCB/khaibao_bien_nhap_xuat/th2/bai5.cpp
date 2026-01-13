/*
Viet chuong trinh cho phep nhap vao do dai 3 canh cua 1 tam giac. 
Tinh chu vi va dien tich cua tam giac do.Vi du:
Chu vi P = a + b + c
nua chu vi p = (a + b + c) / 2
S = sqrt[ p (p - a) (p - b) (p - c) ]
*/
#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c, p, S, chuvi;
    scanf("%f%f%f", &a, &b, &c);
	chuvi = a+b+c;
	p= chuvi/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("Chu vi: %.2f\n", chuvi);
	printf("Dien tich: %.2f", S);
}
