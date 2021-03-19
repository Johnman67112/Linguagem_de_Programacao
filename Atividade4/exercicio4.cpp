#include <stdio.h>

int main() {
	int sas, nar, menor, maior;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &sas);
	printf("Digite o segundo valor: ");
	scanf("%d", &nar);
	
	if (sas <= nar) {
		menor = sas;
		maior = nar;
	}
	else {
		menor = nar;
		maior = sas;
	}
	printf("Os numeros em ordem crescente ficam: %d e %d", menor, maior);
}
	
