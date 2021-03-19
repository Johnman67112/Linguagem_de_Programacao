#include <stdio.h>

int main() {
	int num1, num2, soma;
	
	printf("Digite o valor do primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o valor do segundo numero: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	
	if (soma > 10) {
		printf("\nA soma foi: %d", soma);
	}
	else {
		printf("Valor da soma invalido ou insuficiente.");
	}
}
