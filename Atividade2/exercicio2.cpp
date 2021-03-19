#include <stdio.h>

int main() {
	int codigo = 1;
	float preco = 0.0;
	
	printf("Digite o preco do seu produto: ");
	scanf("%f", &preco);
	
	printf("Muito bem, agora digite o codigo do seu produto, de 1 a 6: ");
	scanf("%d", &codigo);
	switch(codigo) {
		case 1:
			printf("O seu produto e de origem A.\n");
			break;
		case 2:
			printf("O seu produto e de origem B.\n");
			break;
		case 3:
			printf("O seu produto e de origem C.\n");
			break;
		case 4:
			printf("O seu produto e de origem D.\n");
			break;
		case 5:
			printf("O seu produto e de origem E.\n");
			break;
		case 6:
			printf("O seu produto e de origem E.\n");
			break;
		default:
			printf("O seu produto e internacional.\n");
			break;
	}
	printf("O preco do seu produto e: R$%.2f \n", preco);
}
