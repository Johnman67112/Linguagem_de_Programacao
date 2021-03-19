#include <stdio.h>
#include <math.h>

int main() {
	int a, b;
	float x;
	
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	
	x = -b / a;
	printf("Sua raiz e: %.2f", x);
}
