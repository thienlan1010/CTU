//kiem tra so nguyen duong, am, hay = 0
#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	
	if(n<0){
		printf("You entered a negative number.");
	}else if(n==0){
		printf("You entered 0.");
	}else{
		printf("You entered a positive number.");
	}
}
