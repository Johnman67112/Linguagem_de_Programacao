#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	double delta, raiz, x1, x2;
	
	printf("Equacao de segundo grau: ");
	printf("\nDigite o valor de a: ");
	scanf("%d", &a);
	printf("\nDigite o valor de b: ");
	scanf("%d", &b);
	printf("\nDigite o valor de c: ");
	scanf("%d", &c);
	
	if (a == 0) {
		printf("\nNao e uma equacao de segundo grau pois a = 0.");
	}
	else {
		delta = double((b * b) - (4 * a * c));
		if (delta < 0) {
			printf("\nNao e possivel calcular as raizes pois delta < 0, e as raizes sao imaginarias.");
		}
		else {
			raiz = sqrt(delta);
			x1 = (-b + raiz) / 2.0 * a;
			x2 = (-b - raiz) / 2.0 * a;
			
			printf("\nAs raizes da sua equacao sao: ");
			printf("\nX1 = %.4f & X2 = %.4f.", x1, x2);
			printf("\n Seu delta e igual a %f", delta);
			
			if (delta == 0) {
				printf("\n\nSuas raizes sao iguais pois o delta e igual a 0.");
			}
		}
	}
}
