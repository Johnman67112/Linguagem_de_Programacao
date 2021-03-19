#include <stdio.h>

int main() {
	float v, r, a;
	
	printf("Digite o valor do Raio: ");
	scanf("%f", &r);
	printf("Digite o valor da Altura: ");
	scanf("%f", &a);
	
	v = 3.1415 * r * r * a;
	
	printf("O valor do volume da lata e: %.2f", v);
}
