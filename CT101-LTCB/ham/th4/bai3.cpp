#include<stdio.h>
#include<math.h>
double power(float a, int n) {
    if (n == 0)
        return 1.0;
    double Y = power(a, n/2);
    if (n%2 == 0)
        return Y*Y;
    return Y*Y*a;
}
/*power(3, 4) thang 1	
	y = power(3, 2) tang 2
    	y = power(3, 1) tang 3 => 
        	y = power(3, 0) =>do n==0 nên return 1.0
        	return 1.0*1.0*3 = 3 => quay lai tang 3 thi n=1 ma n%2 le
    	return 3*3 = 9
	return 9*9 = 81
*/
int main(){
	printf("%.4lf\n", power(3.14, 10));



}
