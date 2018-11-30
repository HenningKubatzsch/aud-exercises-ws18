#include <stdio.h>

typedef struct node* tree;
struct node {
	int key;
	tree left, right;
};

#include "print_tree.h"


int countlabel(tree t, int key) {
	if (t == NULL)
		return 0;
	if (t->key == key)
		return countlabel(t->left, key) + 1 + countlabel(t->right, key);
	else
		return countlabel(t->left, key) + countlabel(t->right, key);
}

tree baz(tree s, tree t) {
	if (s == NULL)
		return NULL;
	tree l = baz(s->left, t);
	tree r = baz(s->right, t);
	int f = countlabel(t, s->key);
	return mktree( f, l, r);
}

int leafprod(tree t) {
	if (t == NULL)
		return 1; // 1 neutrales Element von *
	if (t->left == NULL && t->right == NULL) // Blatt!
		return t->key;
	return leafprod(t->left) * leafprod(t->right);
}	

int main() {
	tree s = mktree(2, mktree(3, mkleaf(2), mkleaf(4)), mkleaf(1));
	tree t = mktree(2, mkleaf(2), mkleaf(3));
	printf("s:\n"); printTree(s);
	printf("t:\n"); printTree(t);
	printf("countlabel(t, 2) = %d\n", countlabel(t, 2));
	printf("countlabel(t, 3) = %d\n", countlabel(t, 3));
	printf("countlabel(t, 0) = %d\n", countlabel(t, 0));
	printf("baz(s,t) = \n");
	printTree(baz(s,t));
	printf("leafprod(s) = %d and leafprod(t) = %d\n", leafprod(s), leafprod(t));
	return 0;
}
