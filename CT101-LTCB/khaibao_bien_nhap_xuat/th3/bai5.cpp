//Tinh dien tich voi ban kinh tu ban phim
//S = pi * r*r (r la ban kinh)
//d la duong kinh => d=2r, r = d/2
#include<stdio.h>
int main(){
	float r,s;
	scanf("%f", &r);
	s = 3.14 * r*r;
	printf("%.2f", s);
}
