#include <stdio.h>

int main() {
	int sieve[1001];
	// setze alle Stellen auf 1.
	for(int n = 0; n < 1001; n = n+1)
		sieve[n] = 1;
	
	for(int p = 2; p < 1001; p = p+1){
		if (sieve[p] == 1) {
			printf("%d ", p);
			for(int n = 2 * p; n < 1001; n = n + p)
				sieve[n] = 0; 
		}
	}

	return 0;
}
