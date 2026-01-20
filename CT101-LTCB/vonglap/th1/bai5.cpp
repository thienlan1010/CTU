#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int tong=0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		//tong+=pow(-1,i)*i;
		if(i%2==0){
			tong+=i;
		}else{
			tong-=i;
		}
	}
	printf("%d", tong);
}
