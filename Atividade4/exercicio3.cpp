#include <stdio.h>

int main() {
	int val1, val2, soma;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &val1);
	printf("Digite o primeiro valor: ");
	scanf("%d", &val2);
	
	soma = val1 + val2;
	
	if (soma >= 10) {
		soma = soma + 5;
	}
	else {
		soma = soma - 7;
	}
	
	printf("Seu valor final e de: %d", soma);
}
