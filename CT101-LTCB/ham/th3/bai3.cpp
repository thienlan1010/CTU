#include<stdio.h>
void in_xuoi(int n){
    if(n < 10){
        printf("%d ", n);
        return;
    }

    in_xuoi(n / 10);
    printf("%d ", n % 10);
}
int main(){
	in_xuoi(1346);
	printf("\n");
	in_xuoi(401);
}

