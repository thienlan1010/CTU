//tinh giay
#include <stdio.h>
int main() {
    int h, m, s;
    int totalSeconds;

    scanf("%dh%dm%ds", &h, &m, &s);

    totalSeconds = h * 3600 + m * 60 + s;

    printf("Number of seconds: %d", totalSeconds);

    return 0;
}
