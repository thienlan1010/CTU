/*
Vi?et chuong trinh cho phep nhap vao gia tri nhiet do Celsius (°C). 
Tinh gia tri nhiet do Fahrenheit (°F) tuong ung.
*/
#include<stdio.h>
int main(){
	int a;
	float f;
	scanf("%d", &a);
	f = (float)9*a/5+32;
	printf("%d do C = %.1f do F", a, f);
}
