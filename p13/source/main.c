#include <stdlib.h>
#include <stdio.h>

double P(double X, int n) {
	int i;
	double a = 1;
	for (i = 1; i <= n; i++) {
		a = a * X;
	}
	return a;
}

void main(void) {
	int k;
	double ans;
	printf("�p��3.5��k����?�п�Jk=");
	scanf_s("%d", &k);
	ans = P(3.5, k);
	printf("3.5��%d����=%f\n", k, ans);
}