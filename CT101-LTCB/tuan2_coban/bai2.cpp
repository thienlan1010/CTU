//Viet chuong trinh nhap vao so ngay. Doi no sang nam, tuan, ngay. Gia su 1 nam co 365 ngay va 1 tuan co 7 ngay.
#include<stdio.h>
int main(){
	int a, day, week, year;
	scanf("%d", &a);
	year = a/365;
	week = (a%365)/7;
	day = (a%365)%7;
	printf("%d days = %d year(s) %d week(s) and %d day(s).", a, year, week, day);
}
