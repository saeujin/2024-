#include <stdio.h>

int main() {
	printf("총 10개의 숫자 입력\n");
	int a[10] = { 0 };
	int counto = 0, counte = 0;
	for (int i = 0; i < 10; i++) {
		int n;
		printf("입력: ");
		scanf("%d", &n);
		if (n % 2 == 0) a[10 - ++counte] = n;
		if (n % 2 == 1) a[counto++] = n;

	}
	printf("배열 요소의 출력:");
	for (int i = 0; i < 10; i++) {
		printf(" %d", a[i]);
	}
	return 0;
}