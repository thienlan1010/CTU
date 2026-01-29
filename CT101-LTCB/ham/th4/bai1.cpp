#include<stdio.h>
int is_leap_year(int n){
	if(n%400==0 || (n%4==0 && n%100!=0)){
		return 1;
	}else{
		return 0;
	}
}
/*
int is_leap_year(int n) {
    if (n % 4 != 0)
        return 0; 
    if (n % 100 != 0)
        return 1; 
    if (n % 400 == 0)
       return 1;   
   return 0; 
}*/
int main(){
	int n;
	scanf("%d", &n);
	if(is_leap_year(n)){
		printf("%d is a leap year.", n);
	}else{
		printf("%d is not a leap year.", n);
	}
}
