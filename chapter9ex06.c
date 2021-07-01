#include <stdio.h>
void replace(char char_array[]) {
	int i;

	for (i = 0; i < sizeof(char_array); ++i) {
		if (char_array[i] == '-') {
			char_array[i] = '_';
		}
	}
}
int main(void) {
	int i;
	char chars[] = { 'a', 'n', '-', 'g', 'e','l', '_' };
	replace(chars);
	for (i = 0; i < sizeof(chars); ++i) {
		printf("%c ", chars[i]);
	}
	return(0);
}
