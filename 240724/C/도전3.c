#include <stdio.h>

int main() {
	printf("�� 10���� ���� �Է�\n");
	int a[10] = { 0 };
	int counto = 0, counte = 0;
	for (int i = 0; i < 10; i++) {
		int n;
		printf("�Է�: ");
		scanf("%d", &n);
		if (n % 2 == 0) a[10 - ++counte] = n;
		if (n % 2 == 1) a[counto++] = n;

	}
	printf("�迭 ����� ���:");
	for (int i = 0; i < 10; i++) {
		printf(" %d", a[i]);
	}
	return 0;
}