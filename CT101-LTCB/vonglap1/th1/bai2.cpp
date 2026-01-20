//tu trai sang phai, tu tren xuong
#include <stdio.h>

int main() {
	//n la cot, m la dong
    int m, n;
    scanf("%d %d", &m, &n);

   /* for (int i = 1; i <= m * n; i++) {
        printf("%d ", i);

        if (i % n == 0) {
            printf("\n");
        }
    }*/
//cach 2
 for (int i = 1; i <= m; i++) {    //dong     
        for (int j = 1; j <= n; j++) {   //cot   
            printf("%d ", (i - 1) * n + j);
        }
        printf("\n");                       
    }
    return 0;
}

