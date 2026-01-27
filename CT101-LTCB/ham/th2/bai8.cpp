#include<stdio.h>
#include<math.h>
double cosin(double x, double epsilon){
    double term = 1.0;   // s? h?ng d?u tiên T0
    double sum  = 1.0;
    int n = 0;

    while (fabs(term) > epsilon){
        n++;
        term *= -x * x / ((2*n - 1) * (2*n));
        sum += term;
    }

    return sum;
}
int main(){
	const double pi=3.141592653;
	printf("%.10lf",cosin(pi/3,0.0000000001));
	printf("\n");
	printf("%.10lf",cosin(pi/2,0.0000000001));
	printf("\n");
	printf("%.10lf",cosin(0,0.0000000001));

}
