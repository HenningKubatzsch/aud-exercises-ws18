#include <stdio.h>

int main(){
	int eingabe, faktor;
	printf("Bitte Zahl eingeben: ");
	scanf("%d", &eingabe);
	for (faktor = 1; faktor <= eingabe; faktor = faktor + 1) {
		for (int i = 1; i <= eingabe; i = i + 1){
			printf("%4d", i * faktor);
		}
		printf("\n");
	}
	
	return 0;
}
