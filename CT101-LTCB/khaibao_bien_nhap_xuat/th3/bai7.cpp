//Tinh chu vi hinh vuong voi chieu dai duong cheo duoc nhap tu ban phim
//d la duong cheo => d = a*sqrt(2) = > a = d/sqrt(2)
//cv = 4*a => cv = 4 *  (d/sqrt(2)) = 2*sqrt(2) * d
//S = a*a
#include<stdio.h>
#include<math.h>
int main(){
	float d,a,cv;
	scanf("%f", &d);
	a = d/sqrt(2);
	cv = 4*a;
	printf("Chu vi hinh vuong voi duong cheo %.2f la: %.2f", d, cv);
}
