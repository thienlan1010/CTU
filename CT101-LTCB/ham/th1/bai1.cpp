#include<stdio.h>
int count(int n){
	if(n==0){
		return 0;
	}
	
	return count(n/10)+1; 
}
int main(){
	printf("%d", count(12345));
	printf("\n");
	printf("%d", count(1234));
	printf("\n");
	printf("%d", count(0));
}
