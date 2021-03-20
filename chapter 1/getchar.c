#include <stdio.h>

main() {
	if (getchar() != EOF) {
		printf("getchar: " + getchar());
		printf("EOF: " + EOF);
	}
}