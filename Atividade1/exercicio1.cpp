#include <stdio.h>

int main() {
	int soma, num1, num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	
	if (soma % 2 == 0) {
		printf("\nSua soma deu %d, um numero par", soma);
	}
	else {
		printf("\nSua soma deu %d, um numero impar", soma);
	}
}
