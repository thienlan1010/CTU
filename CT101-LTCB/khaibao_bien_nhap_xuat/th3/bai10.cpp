//nhap 1 canh cua tam giac day deu => tam giac deu
//S= (pow(a,2) * sqrt(3)) /4
#include<stdio.h>
#include<math.h>
int main(){
	int a;
	float s;
	scanf("%d", &a);
	
	s = (pow(a,2) * sqrt(3)) /4;
	printf("Area of equilateral triangle = %.2f.", s);
}
