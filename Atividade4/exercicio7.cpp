#include <stdio.h>

int main() {
	int codigo;
	
	printf("----------------Digite o codigo-----------------\n");
	printf("(1)Codigo um    (2)Codigo dois    (3)Codigo tres\n");
	printf("R: ");
	scanf("%d", &codigo);
	
	switch(codigo) {
		case 1:
			printf("Voce digitou o codigo um.");
			break;
			
		case 2:
			printf("Voce digitou o codigo dois.");
			break;
			
		case 3:
			printf("Voce digitou o codigo tres.");
			break;
			
		default:
			printf("Codigo invalido.");
			break;
	}	
}
