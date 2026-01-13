/*
Tinh gia dien sinh hoat
Bac 1: Cho kWh tu 0-50 gia 1.549
Bac 2: Cho kWh tu 51 – 100 gia 1.600
Bac 3: Cho kWh tu 101 -200 gia 1.858
Bac 4: Cho kWh tu 201 -300 gia 2.340
Bac 5: Cho kWh tu 301 -400 gia 2.615
Bac 6: Cho kWh tu 401 tro lên gia 2.701
tien = tong tien cac bac truoc
     + (kwh - moc_truoc) * gia_bac_n

*/
#include <stdio.h>

int main() {
    int csm, csc, kwh;
    float tien = 0;

    scanf("%d%d", &csc, &csm);
    kwh = csm - csc;

    if (kwh < 0) {
        printf("So dien khong hop le");
        return 0;
    }

    if (kwh <= 50) {
        tien = kwh * 1549;
    }
    else if (kwh <= 100) {
        tien = 50 * 1549
             + (kwh - 50) * 1600;
    }
    else if (kwh <= 200) {
        tien = 50 * 1549
             + 50 * 1600
             + (kwh - 100) * 1858;
    }
    else if (kwh <= 300) {
        tien = 50 * 1549
             + 50 * 1600
             + 100 * 1858
             + (kwh - 200) * 2340;
    }
    else if (kwh <= 400) {
        tien = 50 * 1549
             + 50 * 1600
             + 100 * 1858
             + 100 * 2340
             + (kwh - 300) * 2615;
    }
    else {
        tien = 50 * 1549
             + 50 * 1600
             + 100 * 1858
             + 100 * 2340
             + 100 * 2615
             + (kwh - 400) * 2701;
    }

    printf("Tien dien: %.0f VND", tien);
    return 0;
}


