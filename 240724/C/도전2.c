#include <stdio.h>

int main() {
	printf("10진수 정수 입력: ");
	int n, a[32] = { 0 }, i;
	scanf("%d", &n);

	for (i = 0; i < 32; i++) {
		if (n == 0) break;
		a[i] = n % 2;
		n = n / 2;
	}
	while (i) {
		printf("%d", a[--i]);
	}
	return 0;
}