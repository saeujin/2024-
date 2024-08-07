#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int cnum[3], unum[3] = {0};
	srand((int)time(NULL));
	for (int i = 0; i < 3; i++) {
		cnum[i] = rand() % 10;
		if (cnum[i] == cnum[i - 1] && i>=1) i--;
		else if (cnum[i] == cnum[i - 2] && i == 2) i--;
	}
	int s = 0, b = 0, count = 1;
	while (s != 3) {
		s = 0, b = 0;
		printf("3개의 숫자 선택: ");
		scanf("%d %d %d", &unum[0], &unum[1], &unum[2]);
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (unum[i] == cnum[j]) {
					if (i == j) {
						s++;
					}
					else b++;
				}
			}
		}
		printf("%d번째 도전 결과: %d strike, %d ball!!\n", count++, s, b);
	}
	printf("\nGame Over!");
	return 0;
}