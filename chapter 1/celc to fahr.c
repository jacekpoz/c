#include <stdio.h>

main() {
	float fahr, celsius;
	
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	
	printf("Celsius to Fahrenheit\n");
	while (celsius <= upper) {
		fahr = celsius * 1.8 + 32.0;
		printf("%3.0f\t\t%6.1f\n", celsius, fahr);
		celsius += step;
	}
}
