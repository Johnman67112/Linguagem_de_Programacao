#include <stdio.h>

int main() {
	int numero, numme, numma;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	numme = numero - 4;
	numma = numero + 1;
	
	while (numme != numero) {
		printf("\n%d", numme);
		numme++;
	}
	while (numma != numero + 5) {
		printf("\n%d", numma);
		numma++;
	}
}
