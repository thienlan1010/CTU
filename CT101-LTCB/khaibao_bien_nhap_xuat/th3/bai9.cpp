#include<stdio.h>
int main(){
	int d, m, y, hientai, tuoi;
	scanf("%d%d%d%d", &d, &m, &y, &hientai);
	
	tuoi = hientai - y;
	printf("Ban sinh ngay %02d thang %02d nam %d. Nam nay, ban %d tuoi.", d,m,y,tuoi);
}
