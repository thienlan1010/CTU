#include <stdio.h>

int C(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return C(n - 1, k - 1) + C(n - 1, k);
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        for (int k = 0; k <= i; k++) {
            printf("%d ", C(i, k));
        }
        printf("\n");
    }

    return 0;
}

