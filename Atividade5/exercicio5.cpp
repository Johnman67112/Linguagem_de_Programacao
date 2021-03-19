#include <stdio.h>

int main() {
	int numero, fatorial, numfat, controlador = 1;
	
	printf("Digite o numero que deseja realizar o fatorial: ");
	scanf("%d", &numero);
	
	fatorial = numero;
	
	while (controlador != numero) {
		numfat = numero - controlador;
		fatorial = fatorial * numfat;
		controlador = controlador + 1;
	}
	
	printf("Seu fatorial deu: %d", fatorial);
}
