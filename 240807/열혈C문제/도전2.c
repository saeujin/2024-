#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("숫자를 입력하시오 : ");
	int n, a[100][100] = { 0 }, count = 1, i = 0, j = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		a[i][n] = 1;
		a[n][i] = 1;
	}
	while (count <= n * n) {
		while (a[i][j] == 0 && j<n) {
			a[i][j++] = count++;
		}
		j--;
		i++;
		while (a[i][j] == 0 && i<n) {
			a[i++][j] = count++;
		}
		i--;
		j--;
		while (a[i][j] == 0 && j>=0) {
			a[i][j--] = count++;
		}
		j++;
		i--;
		while (a[i][j] == 0 && i>=0) {
			a[i--][j] = count++;
		}
		i++;
		j++;
	}
	for(int i =0; i<n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}