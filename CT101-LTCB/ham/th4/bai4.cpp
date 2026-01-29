/*1634 voi k = 4 
(1+6+3+4) mu 4 = 1+1296+81+256=1634
*/
#include<stdio.h>
#include<math.h>
int is_Armstrong(int n) {
    int temp = n;
    int k = 0;
    int sum = 0;

    int count_temp = n;
    while (count_temp > 0) {
        count_temp /= 10;
        k++;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
       
        sum += pow(digit, k);
        temp /= 10;
    }

    if (sum == n) {
        return 1; 
    } else {
        return 0; 
    }

int main(){
	printf("%d\n", is_Armstrong(153));
}
