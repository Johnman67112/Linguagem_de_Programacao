#include <stdio.h>

int main() {
	float salario, prestacao;
	
	printf("Digite o valor de seu salario: ");
	scanf("%f", &salario);
	printf("Digite o valor de sua prestacao: ");
	scanf("%f", &prestacao);
	
	if (prestacao > (salario * 0.3)) {
		printf("\nEmprestimo negado!!!");
	}
	else {
		printf("\nEmprestimo aprovado!!!");
	}
}
