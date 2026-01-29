/*
123321 => yes
12012 => No
*/
#include<stdio.h>
#include<math.h>
int isPalindrome(int n) {
    int original = n;
    int rev = 0;

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    if (rev == original)
        return 1;
    else
        return 0;
}
//de quy
/*
int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int isPalindrome(int n) {
    return n == reverseNumber(n, 0);
}
*/
int main(){
	if (isPalindrome(12344321))
	  printf("YES");
	else  printf("NO");
	printf("\n");
	printf("%d", isPalindrome(2));
	printf("\n");
	printf("%d", isPalindrome(123));
	printf("\n");
	printf("%d", isPalindrome(11));


}
