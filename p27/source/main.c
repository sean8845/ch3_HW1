#include <stdlib.h>
#include <stdio.h>
long f(long a) {
	if (a <= 1) return 1;
	else return(a * f(a - 1));
}
int main(void) {
	int i;
	for (i = 0; i <= 10; i++) printf("%2d! = %1d\n", i, f(i));
	return 0;
}