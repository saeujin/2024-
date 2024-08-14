#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char name[10];
	char pnum[20];
}PERINF;

void insert(PERINF* a, int* used, int* max_size) {
	if (*used >= *max_size) {
		puts("더 이상 데이터 삽입이 불가합니다.");
	}
	puts("[INSERT]"); printf("\n");
	printf("이름을 입력하세요 : ");
	scanf("%s", a[*used].name);
	printf("전화번호를 입력하세요 : ");
	scanf("%s", a[*used].pnum);
	puts("데이터가 삽입되었습니다."); printf("\n");
	++(*used);
}

void delete(PERINF* a, int* used) {
	char sear[10];
	int count = 0;
	puts("[DELETE]"); printf("\n");
	for (int i = 0; i < *used; i++) {
		printf("%d번\n\n%s\n%s\n\n", i + 1, a[i].name, a[i].pnum);
	}
	printf("삭제할 사람의 이름을 입력하세요 : ");
	scanf("%s", sear);
	for (int j = 0; j < *used; j++) {
		if (strcmp(sear, a[j].name) == 0) {
			++count;
			for (int k = j; k < *used; k++)
				a[j] = a[j + 1];
			puts("삭제하였습니다.");
			--(*used);
			break;
		}
	}
	if (count <= 0)
		puts("찾을 수 없습니다."); printf("\n");
}

void search(PERINF* a, int* used) {
	char sear[10];
	int count = 0;
	puts("[SEARCH]"); printf("\n");
	printf("검색할 사람의 이름을 입력하세요 : ");
	scanf("%s", sear);
	for (int j = 0; j <= *used; j++) {
		if (strcmp(sear, a[j].name) == 0) {
			printf("\n%s\n%s\n\n", a[j].name, a[j].pnum);
			++count;
			break;
		}
	}
	if (count <= 0)
		puts("검색 결과가 없습니다."); printf("\n");
}

void printAll(PERINF* a, int* used) {
	puts("[Print All]"); printf("\n");
	if (*used > 0) {
		for (int i = 0; i < *used; i++)
			printf("%d번\n\n%s\n%s\n\n", i + 1, a[i].name, a[i].pnum);
	}
	else
		puts("데이터가 없습니다"); printf("\n");
}

int main(void) {
	int sel, max_size = 30, used = 0;
	PERINF* mem = (PERINF*)malloc(sizeof(PERINF) * max_size);

	puts("--------------전화번호 관리 프로그램입니다.----------------");
	puts("사용하실 기능을 선택하세요.");
	while (1) {

		puts("***** MENU *****");
		puts("1. Insert");
		puts("2. Delete");
		puts("3. Search");
		puts("4. Print All");
		puts("5. Exit");
		printf("Choose the item : ");
		scanf("%d", &sel);

		if (sel == 1)
			insert(mem, &used, &max_size);

		else if (sel == 2)
			delete(mem, &used);

		else if (sel == 3)
			search(mem, &used);

		else if (sel == 4)
			printAll(mem, &used);

		else if (sel == 5)
			break;

		else
			puts("다시 입력하세요 ");
	}

	free(mem);
	return 0;
}