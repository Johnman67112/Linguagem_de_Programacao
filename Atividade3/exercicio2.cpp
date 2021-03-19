#include <stdio.h>

int main() {
	int ht;
	float vh, pd, sb, td, sl;
	
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%d", &ht);
	printf("Digite o valor por hora trabalhada: ");
	scanf("%f", &vh);
	printf("Digite o percentual de desconto: ");
	scanf("%f", &pd);
	
	sb = ht * vh;
	td = (pd / 100) * sb;
	sl = sb - td;
	
	printf("Horas trabalhadas: %d\n", ht);
	printf("Valor por hora: R$%.2f\n", vh);
	printf("Percentual de desconto: %.2f%\n", pd);
	printf("Salario Bruto: R$%.2f\n", sb);
	printf("Total de Desconto: R$%.2f\n", td);
	printf("Salario Liquido: R$%.2f", sl);
}
