#include<stdio.h>
#include<math.h>

long long gt(int n){
    long long s = 1;
    for(int i = 1;i <= n;i++){
        s*=i;
    }
    return s;
}

double lt(double x, int n){
    double s = 1;
    for(int i = 1;i <= n;i++){
        s *= x;
    }
    return s;
}
double cosin(double x, double e){
    int n = 0;
    double sum = 1;
    while(lt(x,2*n)/gt(2*n) > e){ 
        n++;
        if(n % 2 == 1){
            sum -= lt(x,2*n)/gt(2*n);
        } else {
            sum += lt(x,2*n)/gt(2*n);
        }
       
    }
    return sum;
}

int main(){
	const double pi=3.141592653;
	printf("%.10lf",cosin(pi/3,0.0000000001));
	
	/*const double pi=3.141592653;
	printf("%.10lf",cosin(pi/2,0.0000000001));
	
	printf("%.10lf",cosin(0,0.0000000001));*/
}
