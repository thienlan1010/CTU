#include <stdio.h>

int add(int a, int b) {
   return a+b;
}

int main() {
    printf("%d\n", add(5, 2));
//7
printf("%d\n", add(-5, 1));
//-4
printf("%d\n", add(add(5, 2), -8));
//-1
printf("%d\n", add(15, add(7, -10)));
//12

}

