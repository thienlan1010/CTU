//tinh so h,m,s
//1 gio = 3600s
// 1p = 60s
#include<stdio.h>
int main(){
	int a, h, m, s;
	scanf("%d", &a);
	h = a/3600;
	m = (a%3600)/60;
	s = a % 60;
	printf("%02d:%02d:%02d", h,m,s);
}
