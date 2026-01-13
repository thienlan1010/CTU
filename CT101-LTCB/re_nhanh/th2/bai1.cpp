/*
tong 5 bai kiem tra dat 4 tro len thi dat, con lai ko dat
*/
#include<stdio.h>
int main(){
	float lt, th1, th2, th3, th4, diem;
	scanf("%f%f%f%f%f", &lt, &th1, &th2, &th3, &th4);
	
	diem = lt + th1 + th2 + th3 + th4;
	//printf("%.2f\n", diem);
	if(diem >= 4.0){
		printf("DAT");
	}else{
		printf("KHONG DAT");
	}
}
