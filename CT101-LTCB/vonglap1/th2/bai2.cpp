/*
co 100 con trau
co 100 bo co
trau dung an 5 bo
trau nam an 3 bo
trau nghe: 5 con an chung 1 bo => 1 con an 1/5 bo
=> a trau dung, b trau nam, c trau nghe

tong so trau a+b+c=100
tong so bo co 5a + 3b + c/5 = 100
ket qua: 
5 20 75
12 8 80
*/
#include <stdio.h>

int main() {
    int a, b, c;

    for (a = 0; a <= 100; a++) {
        for (b = 0; b <= 100 - a; b++) {
            c = 100 - a - b;

            if (c % 5 == 0 && 5*a + 3*b + c/5 == 100) {
                printf("%d %d %d\n", a, b, c);
            }
        }
    }

    return 0;
}

