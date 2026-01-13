//Viet chuong trinh nhap vao so do 2 góc cua 1 tam giac. 
//In ra so cua goc con lai.
//Tong 3 goc bang 180 => c = 180 - (a+b)

#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d%d", &a,&b);
	c= 180 - (a+b);
	printf("%d", c);
}
