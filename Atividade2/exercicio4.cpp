#include <stdio.h>
#include <math.h>

int main() {
	float pi = 3.1415, area, perimetro, raio;
	
	printf("Digite o valor do raio da sua circunferencia: ");
	scanf("%f", &raio);
	
	area = pi * pow(raio,2);
	perimetro = 2 * pi * raio;
	
	printf("Sua area e de %.2f\n", area);
	printf("Seu perimetro e de %.2f", perimetro);
}
