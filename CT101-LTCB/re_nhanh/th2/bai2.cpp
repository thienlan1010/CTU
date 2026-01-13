/*
Viet chuong trinh doc 1 so nguyen n tu ban phim. 
Ðem xem n co bao nhieu chi so.
*/
#include <stdio.h>

int main() {
    int n, dem;

    scanf("%d", &n);

    if (n < 0) n = -n;   // phòng tru?ng h?p s? âm

    if (n < 10)
        dem = 1;
    else if (n < 100)
        dem = 2;
    else if (n < 1000)
        dem = 3;
    else if (n < 10000)
        dem = 4;
    else
        dem = 5;   

    printf("%d co %d chu so.", n, dem);

    return 0;
}

