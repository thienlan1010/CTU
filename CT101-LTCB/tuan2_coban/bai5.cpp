//tinh chuvi va dientich tam giac
//P=a+b+c
//p=(a+b+c)/2
//S=sqrt(p(p-a)(p-b)(p-c))

#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c, chuvi, p, dientich;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	chuvi = a + b + c;
	p = chuvi/2;
	dientich = sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("Chu vi: %.2f \nDien tich: %.2f", chuvi, dientich);
	
}

