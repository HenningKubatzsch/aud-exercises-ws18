#include <stdio.h>

void swap(int *x, int *y) {
	int h = *x;
	*x = *y;
	*y = h;
}

int main() {

	int a = 5, b = 7;

	swap(&a, &b);

	printf("a = %d, b = %d\n", a, b);
	// a = 7, b = 5

	return 0;
}
