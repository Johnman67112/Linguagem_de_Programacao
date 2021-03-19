#include <stdio.h>

int main() {
	int tempo, litros, velocidade, distancia;
	
	printf("Digite o tempo em horas da viagem: ");
	scanf("%d", &tempo);
	printf("Digite a velocidade media durante a viagem em km/h: ");
	scanf("%d", &velocidade);
	
	distancia = tempo * velocidade;
	litros = distancia / 12;
	
	printf("A distancia percorrida foi de %d Kms.\n", distancia);
	printf("Foram gastos %d litros de gasolina.", litros);
}
