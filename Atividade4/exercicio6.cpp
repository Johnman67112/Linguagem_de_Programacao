#include <stdio.h>

int main() {
	int valor;
	
	printf("Digite um valor entre 0 e 9: ");
	scanf("%d", &valor);
	
	if (valor < 0 || valor > 9) {
		printf("Valor %d invalido.", valor);
	}
	else {
		printf("Valor %d valido.", valor);
	}
}
