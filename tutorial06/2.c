#include <stdio.h>
#include <stdlib.h>

typedef struct element *list;
struct element { int value; list next; };

int sum(list l) {
	if (l == NULL)
		return 0;
	// struct element e;
	// e = *l;
	// return e.value + sum(e.next);
	return l->value + sum(l->next);
	// return (*l).value + sum((*l).next);
}

int sum_it(list l) {
	int tmp = 0;
	while ( l != NULL ) {
		tmp = tmp + l->value;
		l = l->next;
	}
	return tmp;
}


void rmEvens(list* lp){
	// end of list
	if (*lp == NULL)
		return;
	list l = *lp;
	// first element even
	if (l->value % 2 == 0) {
		*lp = l->next;
		free(l);
		rmEvens(lp);
	} else { // first element odd
		rmEvens(&(l->next));
	}
}

int main() {
	return 0;
}
