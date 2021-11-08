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
	printf("計算3.5的k次方?請輸入k=");
	scanf_s("%d", &k);
	ans = P(3.5, k);
	printf("3.5的%d次方=%f\n", k, ans);
}