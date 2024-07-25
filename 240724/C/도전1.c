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
	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &n[i]);
	}
	printf("홀수 출력: ");
	printodd(n);
	printf("\n짝수 출력: ");
	printeve(n);
	return 0;
}