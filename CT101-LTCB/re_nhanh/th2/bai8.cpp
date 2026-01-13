//tinh pt bac 2: ax2 + bx +c =0
#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c, delta, x1, x2;
	scanf("%lf%lf%lf", &a, &b, &c);
	
	if(a==0){
		//bx-c=0
		if(b==0){
			if(c==0){
				printf("Phuong trinh vo so nghiem");
			}else{
				 printf("Phuong trinh vo nghiem");
			}
		}else {
            printf("Phuong trinh co 1 nghiem: x = %.2lf", -c / b);
        }
	}else{
		delta = b*b-4*a*c;
		if(delta<0){
			printf("No real roots");
		}else if(delta==0){
			printf("Phuong trinh co nghiem kep: x = %.2lf", -b / (2*a));
		}else{
			x1 = (-b - sqrt(delta)) / (2*a);
            x2 = (-b + sqrt(delta)) / (2*a);
			printf("Phuong trinh co 2 nghiem:\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf", x2); 
		}
	}
	
}
