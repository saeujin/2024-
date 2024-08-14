#include <stdio.h>
#include <stdlib.h>

typedef struct book_info {
    char title[50];
    char author[20];
    int page;
}book;

int main(void) {
    book* arr[3];
    int i;

    printf("���� ���� �Է�\n");
    for (i = 0; i < 3; i++) {
        book* pbook = (book*)malloc(sizeof(book) * 1);

        printf("����: ");
        fgets((*pbook).author, sizeof((*pbook).author), stdin);

        printf("����: ");
        fgets((*pbook).title, sizeof((*pbook).title), stdin);

        printf("������ ��: ");
        scanf("%d", &((*pbook).page));

        fflush(stdin);
        arr[i] = pbook;
    }

    printf("\n");
    printf("���� ���� ���\n");

    for (i = 0; i < 3; i++) {
        printf("book%d", i + 1);
        printf("����: %s", (*arr[i]).author);
        printf("����: %s", (*arr[i]).title);
        printf("������ ��: %d\n", (*arr[i]).page);
    }

    for (i = 0; i < 3; i++) {
        free(arr[i]);
    }

    return 0;
}