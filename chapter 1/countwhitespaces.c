#include <stdio.h>

main() {
	int c, blanks, tabs, newlines;

	while ((c = getchar()) != EOF) {
		if (c == ' ') ++blanks;
		if (c == '\t') ++tabs;
		if (c == '\n') ++newlines;
		printf("blanks: %d, tabs: %d, newlines: %d\n", blanks, tabs, newlines);
	}
}