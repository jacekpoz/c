#include <stdio.h>

#define FAHR_TO_CELC(x) (5.0 / 9.0) * (x - 32.0)

main() {
	int fahr;
	
	printf("Fahrenheit to Celsius\n");
	for (fahr = 300; fahr >= 0; fahr -= 20) {
		printf("%3.0f\t\t%6.1f\n", fahr, FAHR_TO_CELC(fahr));
	}
}
