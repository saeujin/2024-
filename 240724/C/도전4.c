#include <stdio.h>
#include <string.h>

int main() {
	char a[100];
	gets(a);
	int size = strlen(a), nopalin = 0;
	for (int i = 0; i < size / 2; i++) {
		if (a[i] == a[size - i - 1]) continue;
		else nopalin++;
	}
	printf("ȸ��%s", nopalin == 0 ? " �Դϴ�." : "�� �ƴմϴ�.");
	return 0;
}