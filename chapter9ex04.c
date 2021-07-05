/* Write a function that takes a character array and returns a primitive 
hash code by adding up the value of each character in the array*/
#include <stdio.h>
int array_hash(char chars[]) {
	int i;             
	int hash = 0;       
	for (i = 0; i < sizeof(chars); ++i) {
		hash += chars[i];
	}
	return(hash);
}
int main(void) {
	char char_array[] = { 'F', 'J', 'P', 'Z' };
	printf("Resultado: %d", array_hash(char_array)-1);
	return(0);
}
