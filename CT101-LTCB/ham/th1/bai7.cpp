#include <stdio.h>

int F(int n) {
   if(n==1 || n==0)
   return 1;
   return F(n-1)+F(n-2);
}

int main() {
    int i;
	for(i=0;i<=40;i++)
	    printf("%d ",F(i));
}

