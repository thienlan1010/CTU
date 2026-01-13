/*
nhap ngay thang nam in ra ngay thang nam hom sau
*/
#include <stdio.h>

int main() {
	int d, m, y;
	int D;
	scanf("%d%d%d", &d, &m, &y);
	
	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10: 
		case 12:
			D= 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			D = 30;
			break;
		case 2:
			if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)){
				D=29;
			}else{
				D=28;
			}
	}
	
	if(d<D){
		d++;
	}else{
		d=1;
		m++;
		if(m>12){
			m=1;
			y++;
		}
	}
	printf("%02d/%02d/%02d", d,m,y);
}
