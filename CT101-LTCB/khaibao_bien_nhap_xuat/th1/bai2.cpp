#include <stdio.h>

int main() {
    char ten;
    float lt, th1, th2, th3, th4;
    float trungBinh;

    // Nhap du lieu
    scanf(" %c", &ten);
    scanf("%f %f %f %f %f", &lt, &th1, &th2, &th3, &th4);

    // Tinh diem trung binh (LT + (TH1 + TH2 + TH3 + TH4)/4)/2
    trungBinh = (lt + (th1 + th2 + th3 + th4)/4) / 2;

    // In ket qua
    printf("%c\n", ten);
    printf("Ly thuyet: %.2f\n", lt);
    printf("Thuc hanh 1: %.2f\n", th1);
    printf("Thuc hanh 2: %.2f\n", th2);
    printf("Thuc hanh 3: %.2f\n", th3);
    printf("Thuc hanh 4: %.2f\n", th4);
    printf("Trung binh: %.2f", trungBinh);

    return 0;
}

