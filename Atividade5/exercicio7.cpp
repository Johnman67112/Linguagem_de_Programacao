#include <stdio.h>

int main() {
	long numero, fatorial, numfat;
	
	printf("Digite o numero que deseja realizar o fatorial: ");
	scanf("%d", &numero);
	
	fatorial = numero;
	
	for(int controlador = 1; controlador != numero; controlador++) {
		numfat = numero - controlador;
		fatorial = fatorial * numfat;
	}
	
	printf("Seu fatorial deu: %d", fatorial);
}
