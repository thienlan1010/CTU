/*tinh so km
Giá tien trong pham vi 500m dau tien luon la 11500 VND
Tu sau 500m den 30km, moi km tinh 14500VND
Tu km thu 31 tro di: 11600 VND/km
*/
#include <stdio.h>

int main() {
    float n;
    float tien;

    scanf("%f", &n);

    if (n <= 0.5) {
        tien = 11500;
    } 
    else if (n <= 30) {
        tien = 11500 + (n - 0.5) * 14500;
    } 
    else {
        tien = 11500 + 29.5 * 14500 + (n - 30) * 11600;
    }

    printf("%.2f km = %.2f VND", n, tien);
    return 0;
}

