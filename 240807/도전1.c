#include <stdio.h>

void printarr(int(*arr)[4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}

void change(int(*arr)[4], int(*arr2)[4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr2[i][j] = arr[3 - j][i];
		}
	}
}

int main() {
	int arr[4][4] = { 0 }, arr2[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = 4 * i + j + 1;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0) {
			printarr(arr);
			change(arr, arr2);
		}
		if (i % 2 != 0) {
			printarr(arr2);
			change(arr2, arr);
		}
		printf("\n");
	}
	return 0;
}