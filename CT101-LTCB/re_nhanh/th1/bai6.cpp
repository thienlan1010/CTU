//so sanh cac VDV
#include <stdio.h>

int main() {
    float v1, v2, v3;
    float best, worst;//nhanh nhat, cham nhat
    int best_id, worst_id;//stt

    scanf("%f %f %f", &v1, &v2, &v3);

    // Gia su ban dau
    best = worst = v1;
    best_id = worst_id = 1;

    // So voi VÐV 2
    if (v2 < best) {
        best = v2;
        best_id = 2;
    }
    if (v2 > worst) {
        worst = v2;
        worst_id = 2;
    }

    // So voi VÐV 3
    if (v3 < best) {
        best = v3;
        best_id = 3;
    }
    if (v3 > worst) {
        worst = v3;
        worst_id = 3;
    }

    printf("Thanh tich tot nhat: %.1f giay\n", best);
    printf("Thanh tich thap nhat: %.1f giay\n", worst);
    printf("VDV thi dau quoc gia: %d\n", best_id);
    printf("VDV xuong voi doi tre: %d", worst_id);

    return 0;
}

