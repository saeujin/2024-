#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printrsp(int a) {
	if (a == 1) printf("����");
	if (a == 2) printf("����");
	if (a == 3) printf("��");
}

void printresult(int u, int c) {
	printf("����� ");
	printrsp(u);
	printf(" ����, ��ǻ�ʹ� ");
	printrsp(c);
	printf(" ����, ");
	if (c == u) {
		printf("�����ϴ�!\n");
	}
	if (c == u%3+1) {
		printf("����� �̰���ϴ�!\n");
	}
	if (c%3+1 == u) {
		printf("����� �����ϴ�!\n");
	}
}

int main() {
	int a = 0, b = 0, c = 0;
	srand((int)time(NULL));
	while (!c) {
		int computer = rand() % 3 + 1;
		int user;
		printf("������ 1, ������ 2, ���� 3: ");
		scanf("%d", &user);
		if (computer == user%3+1) {
			a++;
			printresult(user, computer);
		}
		if (computer == user) {
			b++;
			printresult(user, computer);
		}
		if (computer%3+1 == user) {
			c++;
			printresult(user, computer);
		}
	}
	return 0;
}