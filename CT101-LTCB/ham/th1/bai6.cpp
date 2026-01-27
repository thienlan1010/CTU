#include<stdio.h>
int max2(int a, int b){
	return (a>b)?a:b;
}

int main(){
printf("%d\n", max2(7, 9));
//9
printf("%d\n", max2(9, 7));
//9
printf("%d\n", max2(5, 5));
//5

}
