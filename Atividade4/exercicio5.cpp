#include <stdio.h>

int main() {
	float nota1, nota2, nota3, nota4, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("\nDigite a segunda nota: ");
	scanf("%f", &nota2);
	printf("\nDigite a terceira nota: ");
	scanf("%f", &nota3);
	printf("\nDigite a quarta nota: ");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4.0;
	
	if (media >= 5) {
		printf("Aluno aprovado com media: %.2f", media);
	}
	else {
		printf("Alunio reprovado com media: %.2f", media);
	}
}
