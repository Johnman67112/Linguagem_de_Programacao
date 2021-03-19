#include <stdio.h>

int main() {
	float c, f;
	
	printf("Digite a temperatura em Graus Celcius: ");
	scanf("%f", &c);
	
	f = (9 * c + 160) / 5;
	printf("Sua temperatura equivale a %.2f Graus Fahrenheit.", f);
}
