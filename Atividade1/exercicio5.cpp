#include <stdio.h>
#include <math.h>

int main() {
	float var = 23.5, media = 15.0, dp, cv;
	
	dp = sqrt(var);
	cv = dp / media * 100;
	printf("%.2f    %.2f", dp, cv);
}
