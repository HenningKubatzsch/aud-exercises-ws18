#include <stdio.h>

typedef struct element *list;
typedef struct element { int value; list next; } element;

#include "print_list.h"

int f(list l) {
	int diff;
	if (l == NULL) // || l->next == NULL)
		return 1;
	while (l->next != NULL) {
		diff = l->value - l->next->value;
		if (diff < -1 || diff > 1) // Bedingung ist verletzt
			return 0;
		l = l->next;
	}
	return 1;
}

int main() {
	list l_good = cons(1, cons(1, cons(2, cons(1, cons(0, NULL)))));
	list l_bad  = cons(1, cons(1, cons(3, cons(4, NULL))));
	
	printList(l_good);
	printList(l_bad);
	printf("f(l_good) = %d\n", f(l_good));
	printf("f(l_bad) = %d\n", f(l_bad));
	return 0;
}
