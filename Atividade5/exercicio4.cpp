#include <stdio.h>

int main() {
	int controlador = 1, resp; 
	float num1, num2, soma;
	
	while (controlador < 6) {
		printf("\nBem vindo, digite dois numeros para soma: ");
		printf("\nSoma %d de 6.", controlador);
		printf("\n\nNumero um: ");
		scanf("%f", &num1);
		printf("\nNumero dois: ");
		scanf("%f", &num2);
		
		soma = num1 + num2;
		
		printf("\nSua soma deu %.2f", soma);
		printf("\nDeseja continuar?");
		printf("\n(1)Sim / (2)Nao\n");
		scanf("%d", &resp);
		
		if (resp == 1){
			controlador = controlador + 1;
		}
		else if (resp == 2){
			break;	
		}
		else {
			printf("Resposta invalida!!!");
		}
	}	
}
