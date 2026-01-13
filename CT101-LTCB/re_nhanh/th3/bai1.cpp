//kiem ra ngay/thang/nam co hop le hay ko
#include<stdio.h>
int main(){
	int d,m,y, D;
	scanf("%d%d%d", &d,&m,&y);
	
	if(y<1){
		printf("NO");
	}
	if(m<1 || m>12){
		printf("NO");
	}
	
	switch(m){
		case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12:
			D = 31;
            break;
		case 4: case 6: case 9: case 11:
            D = 30;
            break;
        case 2:
            if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
                D = 29;
            else
                D = 28;
            break;	
	}
	
	if(d>=1 && d<=D){
		printf("YES");
	}else{
		printf("NO");
	}
}
