#include <stdio.h>

int main() {
	int num1, num2, soma, i;
	
	printf("Digite o numero minimo: ");
	scanf("%d", &num1);
	printf("Digite o numero maximo: ");
	scanf("%d", &num2);
	i = num1;
	soma = i;
	
	while (i <= num2) {
		if (i % 2 == 0) {
			printf("");
		}
		else {
			printf("\n%d", i);
			soma = soma + i;
		}
		i++;
	}
	printf("\nSoma: %d", soma);
}
