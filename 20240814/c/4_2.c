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

    printf("도서 정보 입력\n");
    for (i = 0; i < 3; i++) {
        book* pbook = (book*)malloc(sizeof(book) * 1);

        printf("저자: ");
        fgets((*pbook).author, sizeof((*pbook).author), stdin);

        printf("제목: ");
        fgets((*pbook).title, sizeof((*pbook).title), stdin);

        printf("페이지 수: ");
        scanf("%d", &((*pbook).page));

        fflush(stdin);
        arr[i] = pbook;
    }

    printf("\n");
    printf("도서 정보 출력\n");

    for (i = 0; i < 3; i++) {
        printf("book%d", i + 1);
        printf("저자: %s", (*arr[i]).author);
        printf("제목: %s", (*arr[i]).title);
        printf("페이지 수: %d\n", (*arr[i]).page);
    }

    for (i = 0; i < 3; i++) {
        free(arr[i]);
    }

    return 0;
}