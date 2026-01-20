#include <stdio.h>
int main() {
    int n;
    float tong=0;
    float tb, x;
    int i=0;
    scanf("%d", &n);//thanh vien
 	for (int i = 1; i <= n; i++) {   
            scanf("%f", &x);
            tong+=x;
    }
    
    /*while(i<n){
    	scanf("%f", &x);
    	tong+=x;
    	i++;
	}*/
   	tb=tong/n;
   	printf("%.2f %.2f", tong, tb);
    return 0;
}

