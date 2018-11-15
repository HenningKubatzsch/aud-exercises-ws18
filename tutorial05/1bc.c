#include <stdio.h>

int m(int);

int g(int n){
	if (n == 0)
		return 0;
	else
		return n - g(g(n-1));
}

int f(int n){
	if (n == 0)
		return 1;
	else 
		return n-m(f(n-1));
}

int m(int n){
	if (n == 0)
		return 0;
	else
		return n - f(m(n-1));
}

int main() {
	int x;
	for(x = 0; x < 30; x=x+1) {
		printf("%d %d %d %d \n", x, g(x), f(x), m(x));
	}
	return 0;
}
