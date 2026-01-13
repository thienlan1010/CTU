//tinh die trung binh
#include <stdio.h>

int main() {
    float lt, th1, th2, dtb;

    scanf("%f%f%f", &lt, &th1, &th2);

    dtb = lt * 0.5 + th1 * 0.2 + th2 * 0.3;

    printf("Diem so: %.1f\n", dtb);

    if (dtb >= 9.0) {
        printf("A");
    } else if (dtb >= 8.0) {
        printf("B+");
    } else if (dtb >= 7.0) {
        printf("B");
    } else if (dtb >= 6.0) {
        printf("C+");
    } else if (dtb >= 5.0) {
        printf("C");
    } else if (dtb >= 4.5) {
        printf("D+");
    } else if (dtb >= 4.0) {
        printf("D");
    } else {
        printf("F");
    }

    return 0;
}

