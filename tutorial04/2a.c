#include <stdio.h>

int main() {
	char name[80];
	int i = 42;
	printf("Bitte gib deinen Namen ein: ");
	scanf("%s", &name);
	printf("Hallo %s!\nEine gute Zahl ist %d.\n", name, i);
	return 0;
}
