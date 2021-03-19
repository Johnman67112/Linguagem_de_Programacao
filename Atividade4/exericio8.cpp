#include <stdio.h>

int main() {
	int plusle;
	
	printf("Digite um valor positivo: ");
	scanf("%d", &plusle);
	
	if (plusle < 0) {
		printf("Valor invalido.");
	}
	else {
		printf("Valor valido, foi: %d", plusle);
	}
}
