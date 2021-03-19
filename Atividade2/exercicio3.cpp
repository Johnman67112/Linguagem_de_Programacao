#include <stdio.h>
#include <time.h>
#include <locale.h>

int main() {
	int dia, mes, ano, idade;
	
	struct tm*data;
	time_t segundos;
	time(&segundos);
	data = localtime(&segundos);
	
	printf("Digite o seu ano de nascimento: ");
	scanf("%d", &ano);
	printf("Digite o seu mes de nascimento: ");
	scanf("%d", &mes);
	printf("Digite o seu dia de nascimento: ");
	scanf("%d", &dia);
	
	idade = (data -> tm_year + 1900) - ano;
	
	if(data -> tm_mon+1 < mes){
        idade --;
    }
    else {
        if(data -> tm_mon + 1 == mes){
            if(data -> tm_mday > dia)
                idade --;
        }
	}
	printf("Voce tem %d anos de idade.", idade);
}
