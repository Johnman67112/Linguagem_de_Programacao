#include <stdio.h>

int main() {
	int valor;	
	
	printf("Digite o valor desejado divisivel por 4 e 5: ");
	scanf("%d", &valor);
	
	if (valor % 4 == 0 and valor % 5 == 0) {
		printf("Seu valor %d e divisivel por 4 e 5.", valor);
	}
	else {
		printf("Valor nao e divisivel por 4 e 5");
	}
}
