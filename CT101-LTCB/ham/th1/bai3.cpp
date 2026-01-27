#include<stdio.h>
void reduce(int a, int b){
	int ucln;
	int c=a;
	int d=b;
	while(d!=0){
		int r=(c%d);
		c=d;
		d=r;
	}
	ucln=c;
	printf("%d/%d = %d/%d", a,b, a/ucln, b/ucln);
	
	
}

int main(){
	reduce(4, 8);
	printf("\n");
	reduce(3, 9);
	printf("\n");
	reduce(1000,1500);
	printf("\n");
	reduce(5, 2);

}
