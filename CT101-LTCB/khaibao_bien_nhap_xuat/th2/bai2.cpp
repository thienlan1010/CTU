/*Viet chuong trinh nhap vao so ngay. Ðoi no sang nam, tuan ngay. 
Gia su 1 nam có 365 ngay va 1 tuan co 7 ngay.
*/
#include<stdio.h>
int main(){
	int n,d,w,y;
	scanf("%d", &n);
	y = n/365;
	w = (n%365)/7;
	d = (n%365)%7;
	
	printf("%d days = %d year(s) %d week(s) and %d day(s).", n, y, w, d);
}
