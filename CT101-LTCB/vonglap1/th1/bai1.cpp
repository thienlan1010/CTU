#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int rev=0;
	int temp = n;
	while(temp>0){
		rev = rev * 10 + temp%10;
		temp /=10;
	}
	if(rev==n){
		printf("%d is a palindrome.", n);
	}else{
		printf("%d is not a palindrome.", n);
	}
}
