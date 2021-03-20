#include <stdio.h>

main() {
	int c, blanksCounter;

	while ((c = getchar()) != EOF) {
		if (c = ' ') ++blanksCounter;
		else blanksCounter = 0;
		if (blanksCounter <= 1) printf(c);
	}
}