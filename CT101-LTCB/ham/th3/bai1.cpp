#include<stdio.h>
#include<math.h>
double S(int n){
    if(n == 1)
        return 1.0;
    return S(n - 1) + 1.0 / n;
}
int main(){
	printf("%.12lf",S(50));
	printf("\n");
	printf("%.12lf",S(10));

}
