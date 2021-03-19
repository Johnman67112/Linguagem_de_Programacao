#include <stdio.h>

int main() {
	float altura_pedro = 150.0, altura_carlos = 120.0;
	int anos = 0;
	
	while (altura_pedro >= altura_carlos) {
		altura_pedro = altura_pedro + 2.0;
		altura_carlos = altura_carlos + 3.0;
		anos ++; 
	}
	
	printf("Serao necessarios %d anos para Carlos ter %.2f metros e Pedro ter %2.f metros de altura.", anos, altura_carlos / 100, altura_pedro / 100);	
}
