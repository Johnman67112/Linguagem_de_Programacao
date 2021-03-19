#include <stdio.h>

int main() {
	int cod;
	
	printf("Digite um codigo de 1 a 7: ");
	scanf("%d", &cod);
	
	switch(cod) {
		case 1:
			printf("Segunda feira.");
			break;
			
		case 2:
			printf("Terca feira.");
			break;
			
		case 3:
			printf("Quarta feira.");
			break;
			
		case 4:
			printf("Quinta feira.");
			break;
			
		case 5:
			printf("Sexta feira.");
			break;
			
		case 6:
			printf("E final de semana, sabado.");
			break;
			
		case 7:
			printf("E final de semana, domingo.");
			break;
			
		default:
			printf("Resposta equivocada.");
			break;
	}
}
