#include <stdio.h>

void printodd(int* n) {
	int count = 0;
	for (int i = 0; i < 10; i++) {
		if (n[i] % 2 == 1 && count == 0) {
			printf("%d", n[i]);
			count++;
			continue;
		}
		if (n[i] % 2 == 1 && count != 0) printf(" ,%d", n[i]);
	}
}

void printeve(int* n) {
	int count = 0;
	for (int i = 0; i < 10; i++) {
		if (n[i] % 2 == 0 && count == 0) {
			printf("%d", n[i]);
			count++;
			continue;
		}
		if (n[i] % 2 == 0 && count != 0) printf(" ,%d", n[i]);
	}
}

int main() {
	int n[10] = { 0 };
	printf("�� 10���� ���� �Է�\n");
	for (int i = 0; i < 10; i++) {
		printf("�Է�: ");
		scanf("%d", &n[i]);
	}
	printf("Ȧ�� ���: ");
	printodd(n);
	printf("\n¦�� ���: ");
	printeve(n);
	return 0;
}