#include <stdio.h>

int main() {
	int score = 5;
	printf("%d", 5 + 10 * 5 % 6);
	printf("%d", 10 / 4);
	printf("%f", 10.0 / 4.0);
	printf("%c", 'A' + 1);
	printf("%d", score + (score == 0));
}
/*O programa gera o resultado: 722.500000B5
	Pois concatena os resultados de todos os prints, pois não há \n ou separação qualquer
*/ 

