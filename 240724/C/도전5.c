#include <stdio.h>

void DesSort(int* n) {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7 - i; j++) {
			if (n[j] < n[j + 1]) {
				int temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
}

int main() {
	int input[7] = { 0 };
	for (int i = 0; i < 7; i++) {
		printf("ют╥б: ");
		scanf("%d", &input[i]);
	}
	DesSort(input);
	for (int i = 0; i < 7; i++) {
		printf("%d ", input[i]);
	}
	return 0;
}