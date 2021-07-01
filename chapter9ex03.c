#include <stdio.h>
int count(int number, int array[], int length) {
	if (length == 0) {
		return 0;
	}
	if (array[length - 1] == number) {
		return(1 + count(number, array, length - 1));
	} else {
		return(count(number, array, length - 1));
	}
}
int main(void) {
	int result;
	int num_list1[] = { 45, 37, 45, 37, 45, 36, 45, 37, 45, 38 };
	printf("NUMERO: 5\n");
	result = count(45, num_list1, sizeof(num_list1));
	printf("Matriz: %d\n", result);
	int num_list2[] = { 3, 5, 7, 9, 3, 6, 8, 3, 4, 10, 3, 3, 3, 3, 3, 219437, 3 };
	printf("Longitud: 9\n");
	return(0);
}
