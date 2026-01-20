#include <stdio.h>

int main() {
    int a,b,p;
    scanf("%d%d%d", &a, &b, &p);
	int foud=0;
 	for (int i = a; i <= b; i++) {   
        if(p%i==0){
              foud=1;
			  break	;
		}       
    }
    if(foud==1){
       	printf("Co it nhat 1 so trong doan [%d, %d] la uoc cua %d.", a, b, p);
	   }else{
	   	printf("Khong co so nao trong doan [%d, %d] la uoc cua %d.", a,b,p);
	   }   
    return 0;
}

