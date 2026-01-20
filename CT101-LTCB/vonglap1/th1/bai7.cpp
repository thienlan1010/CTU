#include <stdio.h>

int main() {
    int n;
    int tong=0;
   /* do{
    	scanf("%d", &n);
    	tong+=n;
	}while(n!=0);
    */
    /*while(1){
    	scanf("%d", &n);
    	if(n==0){
    		break;
		}
    	tong+=n;
	}
    
   */
   for (;;) {              // vòng l?p vô h?n
        scanf("%d", &n);
        if (n == 0)
            break;
        tong += n;
    }
    printf("%d", tong);
}

