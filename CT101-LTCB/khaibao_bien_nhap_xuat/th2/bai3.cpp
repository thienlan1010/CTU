/*
tinh chu vi hinh chu nhat voi chieu dai va chieu rong nhpa vao tu ban phim
chuvu = (d + r)*2
*/
#include <stdio.h>
int main() {
    int d, r;
    scanf("%d%d", &d, &r);
    printf("Chieu rong: %d va chieu dai: %d\n", r,d);
    printf("Chu vi: %d\n", (d+r)*2);
    
    return 0;
}
