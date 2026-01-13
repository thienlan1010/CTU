//nhap duong kinh, tinh chuvi, dien tich hinh tròn
// r = d/2
// chuvi = 2*pi*r = pi * d
//dientich = pi * pow(r,2)
#include<stdio.h>
int main(){
	float d, chuvi, dientich, r;
	scanf("%f", &d);
	
	r = d/2;
	
	chuvi = 2 * 3.14 * r;
	dientich = 3.14 * r*r;
	
	printf("Chu vi: %.2f\nDien tich: %.2f", chuvi, dientich);

	
}
