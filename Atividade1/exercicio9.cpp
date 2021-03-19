#include <stdio.h>
#include <math.h>

int main() { 
	int numero = 2; 
	float raiz;
	
	printf("Quadrados perfeitos entre 1 e 40: ");
	while (numero <= 40) {
		raiz = (sqrt(numero));
		
		if (raiz == int(raiz)) {
			printf("\n%d", numero);
		}
		numero++;
	}
}
