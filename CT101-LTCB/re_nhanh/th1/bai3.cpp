//goc phan 4 
#include<stdio.h>
int main(){
	int n, goc;
	scanf("%d", &n);
	goc = n%360;
	if(goc>=0 && goc<90){
		printf("1");
	}else if(goc>=90 && goc<180){
		printf("2");
	}else if(goc>=180 && goc<270){
		printf("3");
	}else if(goc>=270 && goc<360){
		printf("4");
	}
}
