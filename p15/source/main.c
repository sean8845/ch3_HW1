#include <stdio.h>
#include <stdlib.h>

int M(int x, int y,int z) {
	int max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	return max;
}
int main(void) {
	int n1, n2, n3;
	printf("enter 3 integers:");
	scanf_s("%d%d%d", &n1, &n2, &n3);
	printf("maximum is:%d\n", M(n1, n2, n3));
	return 0;
}