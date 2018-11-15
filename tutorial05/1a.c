#include <stdio.h>

int fib(int n) {
	if ( n < 2 ) { // n ∈ { 0, 1}
		return 1;
	}
	else {	// n >= 2
		return fib( n-1 ) + fib( n-2 );
	}
}

int main() {
	int n;
	printf("Bitte Zahl eingeben: ");
	scanf("%d", &n);
	printf("fib(%d) = %d\n", n, fib(n));
	return 0;
};
