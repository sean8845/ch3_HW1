#include <stdio.h>
#include <stdlib.h>

int A(int a) {
	return a * a;
}
int main(void) {

	int x;
	for (x = 1; x <= 10; x++) {
		printf("%d ", A(x));

	}
	printf("\n");
	return 0;
}