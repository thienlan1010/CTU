//tinh tuoi tre em 6 tuoi thi lop 1
#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	
	
	if(n>=6){
		printf("Tuoi %d: Du tuoi vao lop 1.", n);
	}else{
		printf("Tuoi %d: Khong du tuoi vao lop 1. Cho them %d nam sau.", n, 6-n);
	}
}
