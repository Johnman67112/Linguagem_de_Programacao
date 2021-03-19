#include <stdio.h>

int main() {
	int num1, soma = 1;
	
	while (num1 <= 50) {
		soma = soma + num1;
		num1++;
	}
	printf("A soma dos 50 primeiros numeros inteiros e: %d", soma - 1);
}
