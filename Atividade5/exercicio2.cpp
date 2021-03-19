#include <stdio.h>

int main() {
	int num1, num2, num3, maior;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &num1);
	printf("Digite o segundo valor: ");
	scanf("%d", &num2);
	printf("Digite o terceiro valor: ");
	scanf("%d", &num3);
	
	if (num1 > num2){
		if (num1 > num3) {
			maior = num1;
		}
		else {
			maior = num3;
		}
	}
	else {
		if (num2 > num3) {
			maior = num2;
		}
		else {
			maior = num3;
		}
	}
	
	printf("O maior numero e: %d", maior);
}
