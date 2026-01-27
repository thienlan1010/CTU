#include<stdio.h>
#include<math.h>
float my_abs(float x){
	return fabsf(x);
}
//abs()	cho int
//fabs() cho double
//fabsf() cho float

int main(){
	printf("%.2f\n", my_abs(5.67));
	
	printf("%.2f\n", my_abs(-35.1));

	printf("%.2f\n", my_abs(0.00));


}
