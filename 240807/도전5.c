#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printrsp(int a) {
	if (a == 1) printf("바위");
	if (a == 2) printf("가위");
	if (a == 3) printf("보");
}

void printresult(int u, int c) {
	printf("당신은 ");
	printrsp(u);
	printf(" 선택, 컴퓨터는 ");
	printrsp(c);
	printf(" 선택, ");
	if (c == u) {
		printf("비겼습니다!\n");
	}
	if (c == u%3+1) {
		printf("당신이 이겼습니다!\n");
	}
	if (c%3+1 == u) {
		printf("당신이 졌습니다!\n");
	}
}

int main() {
	int a = 0, b = 0, c = 0;
	srand((int)time(NULL));
	while (!c) {
		int computer = rand() % 3 + 1;
		int user;
		printf("바위는 1, 가위는 2, 보는 3: ");
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