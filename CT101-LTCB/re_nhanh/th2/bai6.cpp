//nhap ngay/thang/nam in ra so ngya trong nam
/*#include <stdio.h>

int main() {
    int d, m, y;
    int S = 0;

    scanf("%d%d%d", &d, &m, &y);

    switch (m) {
        case 1:  S = 0;   break;
        case 2:  S = 31;  break;
        case 3:  S = 59;  break;
        case 4:  S = 90;  break;
        case 5:  S = 120; break;
        case 6:  S = 151; break;
        case 7:  S = 181; break;
        case 8:  S = 212; break;
        case 9:  S = 243; break;
        case 10: S = 273; break;
        case 11: S = 304; break;
        case 12: S = 334; break;
    }

    // ki?m tra nam nhu?n
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
        if (m >= 3) {
            S = S + 1;
        }
    }

    printf("%d", S + d);

    return 0;
}*/
#include <stdio.h>

int main() {
    int d, m, y;
    int tong = 0;

    scanf("%d%d%d", &d, &m, &y);

    switch (m) {
        case 12: tong += 30;   // tháng 11
        case 11: tong += 31;   // tháng 10
        case 10: tong += 30;   // tháng 9
        case 9:  tong += 31;   // tháng 8
        case 8:  tong += 31;   // tháng 7
        case 7:  tong += 30;   // tháng 6
        case 6:  tong += 31;   // tháng 5
        case 5:  tong += 30;   // tháng 4
        case 4:  tong += 31;   // tháng 3
        case 3:
            if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
                tong += 29;   // tháng 2 nam nhu?n
            else
                tong += 28;   // tháng 2 thu?ng
        case 2:  tong += 31;   // tháng 1
        case 1:
            break;
    }

    tong += d;

    printf("%d", tong);

    return 0;
}

